/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:52:29 by osurcouf          #+#    #+#             */
/*   Updated: 2021/02/18 14:52:32 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 🦕
** function : strlcat
** This function will append a given source into a destination.
** The size given should be the total length of the destination - if not,
** you did something wrong.
** Specificity : it will always return the size of the string it attempted to
** create even if there is a problem. For example, all the source couldn't
** be copied (so there's no null-termination). Or if the size given is
** inferior to the actual size of dest, it will return (the size given
** + str_len of src) instead of (str_len of dest + str_len of src).
** 🦕
*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	a;

	i = 0;
	a = 0;
	while (dest[i])
		i++;
	while (src[a] && i + a < size - 1 && size != 0)
	{
		dest[i + a] = src[a];
		a++;
	}
	if (size != 0 || size < i)
		dest[i + a] = 0;
	while (src[a])
		a++;
	if (size < i)
		return (size + a);
	return (i + a);
}
