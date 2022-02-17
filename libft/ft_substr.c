/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:54:00 by osurcouf          #+#    #+#             */
/*   Updated: 2021/02/18 14:54:01 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 🦕
** function : substr
** This function copies a given length from a string into an allocated
** substring. It returns a pointer to it.
** It also gets "start" as an argument, an index which will allow to know
** from where to start copiying the string, on top of having the length to copy.
** Specificity : If the index at which to start is bigger than the length of
** the string, it returns an freeable empty string. If the length given is
** bigger than the length of the string minus the index, we allocate that
** last bit instead of length to not uselessly allocate too much memory and
** allow for leaks.
** 🦕
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (start > ft_strlen(s))
	{
		sub = (char *)malloc(sizeof(char) * 1);
		if (!sub)
			return (NULL);
		sub[0] = 0;
		return (sub);
	}
	if (ft_strlen(s) - start < len)
		sub = (char *)malloc(sizeof(char) * ((ft_strlen(s) - start + 1)));
	else
		sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!(sub))
		return (NULL);
	while (s[start + i] != '\0' && i < len)
	{
		sub[i] = s[i + start];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
