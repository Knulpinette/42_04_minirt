/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:51:56 by osurcouf          #+#    #+#             */
/*   Updated: 2021/02/18 14:51:59 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 🦕
** function : strchr
** This function searches for a given character in a given string.
** It returns a pointer to its first occurence in the string.
** Or it returns NULL if it doesn't find it.
** Specificity : if the given character is '\0', the function will
** return a pointer to the null termination of the string.
** 🦕
*/

char	*ft_strchr(const char *str, int c)
{
	char	a;

	a = (char)c;
	while (*str)
	{
		if (*str == a)
			return ((char *)str);
		str++;
	}
	if (c == '\0' && *str == '\0')
		return ((char *)str);
	return (0);
}
