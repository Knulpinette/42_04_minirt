/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:39:21 by osurcouf          #+#    #+#             */
/*   Updated: 2021/02/18 14:47:30 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 🦕
** function : calloc
** This function initialises all the memory it allocates to \0.
** 🦕
*/

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*mem;
	size_t	i;

	i = 0;
	mem = (void *)malloc(size * n);
	if (!mem)
		return (NULL);
	while (i < n * size)
		((char *)mem)[i++] = 0;
	return (mem);
}
