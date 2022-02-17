/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:53:47 by osurcouf          #+#    #+#             */
/*   Updated: 2021/02/18 14:53:49 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 🦕
** function : strtrim
** This function trims - or cleans - a string of a given set of characters at
** its beginning and its end.
** It allocates memory for a new string, and copies over the old one without
** the given charset. Then it returns it.
** If the given string is empty, it returns a freeable empty string.
** 🦕
*/

#include "libft.h"

/*
** function : checkset
** This function checks if the given character is part of the charset.
*/

static int	check_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/*
** function : trim_cpy
** This function copies the string into the malloc'ed one and
** null-terminates it.
*/

static char	*trim_more(char *trim, char const *s1, int start, int end)
{
	int	i;

	i = 0;
	while (start < end)
	{
		trim[i] = s1[start];
		i++;
		start++;
	}
	trim[i] = '\0';
	return (trim);
}

/*
** function : strtrim
** This function starts with two indexes that will tell trim_more from
** where to where it should copy. They are set at the beginning and the
** end of the string. Then, while the characters of the end or the
** beginning are part of the charset, we decrease of increase.
** That gives us the proper length to allocate (end - start + 1) and all
** the info to send to trim_more.
** It returns the pointer to the trimmed string.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*trim;
	size_t		start;
	size_t		end;

	if (!s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (check_set(s1[start], set) == 1)
		start++;
	if (start == end)
	{
		trim = (char *)malloc(sizeof(char) * 1);
		trim[0] = 0;
		return (trim);
	}
	while (check_set(s1[end - 1], set) == 1)
		end--;
	trim = (char *)malloc(sizeof(char) * ((end - start) + 1));
	if (!(trim))
		return (NULL);
	trim_more(trim, s1, start, end);
	return (trim);
}
