/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:51:47 by osurcouf          #+#    #+#             */
/*   Updated: 2021/02/18 14:51:49 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 🦕
** function : split
** This function splits a given string into "words", a words delimited by a
** given separator.
** It returns a pointer to an array of those words.
** 🦕
*/

#include "libft.h"

/*
** function : nb_words
** This function counts the number of "words", or substrings, that split will
** have to create. Is useful for allocating memory at the start.
*/

static int	nb_words(const char *s, char c)
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == 0 || s[i + 1] == c))
			nb++;
		i++;
	}
	return (nb);
}

/*
** function : fill_split
** This function takes the array created in ft_split and fills it up
** with the words.
** What it does is iterate through the string. As long as it finds a
** seperator character, it continues going. If the character isn't a
** separator, we're at the beginning of a word. First, we'll calculate
** the length of that word with letters, then allocate the proper space
** to the word. Then copy it. Then loop and do it until we have reached
** the maximum number of words expected. Then we set an extra string to
** NULL for proper termination of the array.
*/

static char	**fill_split(const char *s, char c, int words, char **split)
{
	int		i;
	int		word;
	int		letters;

	i = 0;
	word = 0;
	while (word < words)
	{
		while (s[i] && s[i] == c)
			i++;
		letters = 0;
		while (s[i + letters] && s[i + letters] != c)
			letters++;
		split[word] = (char *)malloc(sizeof(char) * (letters + 1));
		if (!split[word])
			return (NULL);
		letters = 0;
		while (s[i] && s[i] != c)
			split[word][letters++] = s[i++];
		split[word++][letters] = 0;
	}
	split[word] = 0;
	return (split);
}

/*
** function : core_split
** Split allocates memory, so that the array will right away be the
** right number of words. Then we protect the malloc in case of error.
** Then we fill split and return it.
*/

char	**ft_split(const char *s, char c)
{
	int		words;
	char	**split;

	if (!s)
		return (NULL);
	words = nb_words(s, c);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	fill_split(s, c, words, split);
	return (split);
}
