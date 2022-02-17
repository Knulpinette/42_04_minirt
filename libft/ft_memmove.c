/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:50:36 by osurcouf          #+#    #+#             */
/*   Updated: 2021/02/18 14:50:49 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 🦕
** function : memmove
** This function moves memory from a given length from a given source to a
** destination.
** This function is tricky however because of possible overlapping between
** the two. As explained on StackOverflow, let's say that :
** src starts @104 = "abcdefgh"
** dst starts @108
** Then 'a' will be @104 and 'e' will be @108.
** dst = "abcdabcd".
** *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
** One of the propositions to solve this was to use an array buffer to store
** the memory to transfer temporarily. But 42 doesn't like array buffers,
** so the other solution is <to copy backwards or forwards depending on the
** situation>. Since the only problem arises when you copy from the front
** (and erase over the source material) so if the pointer of src is inferior
** to the pointer of dest, copy backwards. Else, copy forward.
** Specificity : The function will return NULL as well if both source
** AND dest are empty.
** 🦕
*/

#include "libft.h"

static char	*backward(char *dest, char *src, size_t n)
{
	while (n > 0)
	{
		dest[n - 1] = src[n - 1];
		n--;
	}
	return (dest);
}

static char	*forward(char *dest, char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

void	*ft_memmove(void *to, const void *from, size_t n)
{
	char	*dest;
	char	*src;

	if (!to && !from)
		return (0);
	dest = (char *)to;
	src = (char *)from;
	if (src < dest)
		backward(dest, src, n);
	else
		forward(dest, src, n);
	return (to);
}
