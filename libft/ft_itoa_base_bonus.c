/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_convert_base_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 15:03:50 by osurcouf          #+#    #+#             */
/*   Updated: 2021/03/27 15:03:51 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** 🦕
** function : i_to_a_convert_base
** return : converts the unsigned long number into a given base and returns it
** as a string.
** /!\ Allocation of memory /!\
** 🦕
*/

static char	*ft_putnbr_base(unsigned long n, char *base, int size, char *s)
{
	int	l;

	l = ft_strlen(base);
	s[size] = '\0';
	while (size > 0)
	{
		s[size - 1] = base[n % l];
		n = n / l;
		size--;
	}
	return (s);
}

char	*ft_itoa_base(unsigned long int nb, char *base)
{
	unsigned long	l_nb;
	int				l;
	char			*conv;
	int				size;

	l = ft_strlen(base);
	l_nb = nb;
	size = 1;
	while ((nb / l) != 0)
	{
		size++;
		nb = nb / l;
	}
	conv = (char *)ft_calloc(sizeof(char), size + 1);
	if (!(conv))
		return (NULL);
	conv = ft_putnbr_base(l_nb, base, size, conv);
	return (conv);
}
