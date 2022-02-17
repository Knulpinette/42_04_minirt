/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:52:53 by osurcouf          #+#    #+#             */
/*   Updated: 2021/02/18 14:52:54 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 🦕
** function : strlen
** This function will return the size of a string, minus the null-terminator.
** 🦕
*/

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	const char		*s;

	s = str;
	while (*s)
		s++;
	return (s - str);
}
