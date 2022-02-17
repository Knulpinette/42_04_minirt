/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:50:00 by osurcouf          #+#    #+#             */
/*   Updated: 2021/02/18 14:50:01 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 🦕
** function : memcmp
** This function compares two strings for a given length. When it finds
** a different character, it returns the difference between both compared
** characters.
** Positive result if str1[i] > str2[i]
** Negative result if str1[i] < str2[i]
** Null result if both strings are identical
** Specificity : unsigned char typecasting is necessary.
** 🦕
*/

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)ptr1;
	str2 = (unsigned char *)ptr2;
	i = 0;
	while (i < n)
	{
		if (str1[i] == str2[i])
			i++;
		else
			return (str1[i] - str2[i]);
	}
	return (0);
}
