/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:51:29 by osurcouf          #+#    #+#             */
/*   Updated: 2021/02/18 14:51:30 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 🦕
** function : putnbr_fd
** This function converts a number into a string and write it onto a
** file descriptor.
** STDIN is FD = 0
** 🦕
*/

#include "libft.h"

static void	ft_write(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_write(fd, '-');
		if (n == -2147483648)
		{
			n = n / 10;
			ft_putnbr_fd(-n, fd);
			ft_write(fd, '8');
		}
		else
			ft_putnbr_fd(-n, fd);
	}
	else
	{
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		ft_write(fd, '0' + n % 10);
	}
}
