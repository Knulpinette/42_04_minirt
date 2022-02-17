/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:53:03 by osurcouf          #+#    #+#             */
/*   Updated: 2021/02/18 14:53:05 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 🦕
** function : strmapi
** This function will apply a given function to every char of a string and
** copy the results onto an allocated new string.
** It returns a pointer to that string.
** 🦕
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				size;
	char			*mapi;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	size = ft_strlen(s);
	mapi = (char *)malloc(sizeof(char) * (size + 1));
	if (!mapi)
		return (NULL);
	while (s[i] != '\0')
	{
		mapi[i] = f(i, s[i]);
		i++;
	}
	mapi[i] = 0;
	return (mapi);
}
