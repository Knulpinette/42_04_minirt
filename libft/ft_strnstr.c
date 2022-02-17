/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:53:23 by osurcouf          #+#    #+#             */
/*   Updated: 2021/02/18 14:53:30 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 🦕
** function : strnstr
** This function searches for the little string inside a big string for a
** given length. If it finds it, it returns a pointer to the beginning of
** little into big.
** If little is empty, it returns a pointer to big.
** If it doesn't find it, it returns NULL.
** 🦕
*/

#include "libft.h"

static int	checkl(const char *big, const char *little, size_t len, size_t i)
{
	int	a;

	a = 0;
	while (i < len && little[a] != '\0' && big[i] != '\0')
	{
		if (big[i] != little[a])
			return (0);
		a++;
		i++;
	}
	if (little[a] == '\0')
		return (1);
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!(*little))
		return ((char *)big);
	i = 0;
	while (i < len && big[i] != '\0')
	{
		if (little[0] == big[i] && checkl(big, little, len, i) == 1)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
