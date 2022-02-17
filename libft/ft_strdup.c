/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:52:10 by osurcouf          #+#    #+#             */
/*   Updated: 2021/02/18 14:52:11 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 🦕
** function : strdup
** This function will allocate memory to copy a given string into a new one.
** It returns a pointer to that string.
** If the string is empty, it will create a freeable empty string.
** 🦕
*/

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char			*ptr;
	unsigned int	len_src;
	int				i;

	i = 0;
	len_src = ft_strlen(src);
	if (len_src == 0)
	{
		ptr = malloc(sizeof(char));
		ptr[0] = '\0';
		return (ptr);
	}
	ptr = malloc(sizeof(*ptr) * len_src + 1);
	if (ptr == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
