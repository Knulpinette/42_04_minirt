/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:39:11 by osurcouf          #+#    #+#             */
/*   Updated: 2021/02/18 14:45:46 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 🦕
** function : bzero
** This function will fill a given argument (often memory) with \0.
** It typecasts the given argument into char so that it can replace every
** single bit of memory with 0.
** 🦕
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*bzero;

	bzero = (char *)s;
	while (n > 0)
	{
		bzero[n - 1] = '\0';
		n--;
	}
}
