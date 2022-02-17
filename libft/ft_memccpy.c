/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:49:00 by osurcouf          #+#    #+#             */
/*   Updated: 2021/02/18 14:49:02 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 🦕
** function : memccpy
** This function will copy a source to a destination until a certain character
** is found. It that character is found, it will copy it, and then return
** a pointer to where it is. If it is not found, the function will return NULL.
** Specificity : The function will return NULL as well if both source
** AND dest are empty. Also, unsigned char typecasting necessary.
** 🦕
*/

#include "libft.h"

void	*ft_memccpy(void *to, const void *from, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*src;

	i = 0;
	if (!to && !from)
		return (NULL);
	dest = (unsigned char *)to;
	src = (unsigned char *)from;
	while (i < n)
	{
		if (src[i] == (unsigned char)c)
		{
			dest[i] = src[i];
			i++;
			return (to + i);
		}
		if (src[i] != (unsigned char)c)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (NULL);
}
