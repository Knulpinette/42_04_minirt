/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:39:32 by osurcouf          #+#    #+#             */
/*   Updated: 2021/02/18 14:55:20 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 🦕
** function : isalnum
** This function checks if the given int (a character) is alphanumerical.
** 🦕
*/

int	ft_isalnum(int a)
{
	if (a >= 'a' && a <= 'z')
		return (3);
	if (a >= 'A' && a <= 'Z')
		return (2);
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}
