/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:48:29 by osurcouf          #+#    #+#             */
/*   Updated: 2021/02/18 14:48:31 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 🦕
** function : isprint
** This function checks if the given int (a character) is printable.
** 🦕
*/

int	ft_isprint(int p)
{
	if (p > 31 && p < 127)
		return (1);
	return (0);
}
