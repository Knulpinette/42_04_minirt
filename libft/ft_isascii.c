/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:48:08 by osurcouf          #+#    #+#             */
/*   Updated: 2021/02/18 14:48:10 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 🦕
** function : isascii
** This function checks if the given int (a character) is part of the ascii
** table.
** 🦕
*/

int	ft_isascii(int t)
{
	if (t >= 0 && t <= 127)
		return (1);
	return (0);
}
