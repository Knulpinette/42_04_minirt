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
** function : atof
** This function converts a string into a float.
** It will bypass whitespaces and - one time - the sign '-' or '+'.
** Then, if what comes is a number, it will translate it into an int.
** Everyloop, it will multiply the number stored (nbr) by 10 so it can
** add the new number to the stored one.
** It then returns that positive number, or negative if there was a '-'.
** It will take into acount the '.' and put it in the number.
** 🦕
*/

static float	get_nbr_after_dot(const char *str, int i, float nbr, int np)
{
	int	count;

	count = 1;
	if (str[i] == '.')
		i++;
	else
		return (nbr * np);
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
		count = count * 10;
	}
	return ((nbr / count) * np);
}

float	ft_atof(const char *str)
{
	int		i;
	int		np;
	float	nbr;

	i = 0;
	nbr = 0;
	np = 1;
	while (str[i] != '\0' && str[i] == ' ')
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
	return (get_nbr_after_dot(str, i, nbr, np));
}
