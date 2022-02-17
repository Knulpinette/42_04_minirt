/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:48:47 by osurcouf          #+#    #+#             */
/*   Updated: 2021/02/18 14:48:48 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 🦕
** function : itoa
** This function converts an int into a string.
** First, the int is typecasted into long int to avoid troubles with negative
** edge cases. Size is initialised at 2 to make up for later problems which
** are that size will have to be pre-decremented and that there's the '\0'
** to consider. Then if the number is negative, size++ to hold the '-'.
** Then we calculate the number of digits of n, allocate the memory
** and go to putnbr.
** We check for negative again, and proceed with a positive number !
** 🦕
*/

#include "libft.h"

static char	*ft_putnbr(long int nb, char *str, int size)
{
	int	check_n;

	check_n = 0;
	if (nb < 0)
	{
		check_n++;
		nb = -nb;
	}
	str[size - 1] = '\0';
	while (--size > 0)
	{
		str[size - 1] = '0' + nb % 10;
		nb = nb / 10;
	}
	if (check_n == 1)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	int			size;
	long int	nb;
	char		*str;

	nb = (long int)n;
	size = 2;
	if (n < 0)
		size++;
	while ((n / 10) != 0)
	{
		size++;
		n = n / 10;
	}
	str = (char *)ft_calloc(sizeof(char), size);
	if (!(str))
		return (NULL);
	return (ft_putnbr(nb, str, size));
}
