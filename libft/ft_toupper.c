/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:54:21 by osurcouf          #+#    #+#             */
/*   Updated: 2021/02/18 14:54:22 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 🦕
** function : toupper
** This function changes the lowercase character its given into CAPS.
** It returns the character (change or no change).
** 🦕
*/

int	ft_toupper(int u)
{
	if (u >= 'a' && u <= 'z')
		return (u - 32);
	return (u);
}
