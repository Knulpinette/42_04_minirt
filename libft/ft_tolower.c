/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:54:13 by osurcouf          #+#    #+#             */
/*   Updated: 2021/02/18 14:54:14 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 🦕
** function : tolower
** This function changes the CAPS character it's given into lowercase.
** It returns that character (change or no change).
** 🦕
*/

int	ft_tolower(int l)
{
	if (l >= 'A' && l <= 'Z')
		return (l + 32);
	return (l);
}
