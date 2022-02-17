/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:50:25 by osurcouf          #+#    #+#             */
/*   Updated: 2021/02/18 14:50:27 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 🦕
** function : memcpy
** This function copies a given length from a given source to given a dest.
** Specificity : The function will return NULL as well if both source
** AND dest are empty. Also, unsigned char typecasting necessary.
** 🦕
*/

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;
	size_t			i;

	if (!(to) && !(from))
		return (0);
	dest = (unsigned char *)to;
	src = (unsigned char *)from;
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (to);
}
