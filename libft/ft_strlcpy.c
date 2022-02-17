/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:52:41 by osurcouf          #+#    #+#             */
/*   Updated: 2021/02/18 14:52:42 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 🦕
** function : strlcpy
** This function will copy source over to dest, for a given size
** that's supposed to be the size of dest, including the space for the null
** termination.
** It returns the length of the source.
** 🦕
*/

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;

	if (!dest || !src)
		return (0);
	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while ((src[i] != '\0') && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
