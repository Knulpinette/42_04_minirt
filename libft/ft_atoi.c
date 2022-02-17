/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:37:34 by osurcouf          #+#    #+#             */
/*   Updated: 2021/02/18 14:37:39 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 🦕
** function : atoi
** This function converts a string into an integer.
** It will bypass whitespaces and - one time - the sign '-' or '+'.
** Then, if what comes is a number, it will translate it into a char.
** Everyloop, it will multiply the number stored (nbr) by 10 so it can
** add the new number to the stored one.
** It then returns that positive number, or negative if there was a '-'.
** 🦕
*/

int	ft_atoi(const char *str)
{
	int	i;
	int	np;
	int	nbr;

	i = 0;
	nbr = 0;
	np = 1;
	while (str[i] != '\0' && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			np = np * -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	return (nbr * np);
}
