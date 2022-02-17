/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 11:42:00 by osurcouf          #+#    #+#             */
/*   Updated: 2021/03/03 11:43:07 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 🦕
** function : get_next_line
** This function reads the next line in a file descriptor and saves it.
** Return 1 if read the line.
** Return 0 if reached EOF.
** Return -1 if error.
** Can handle multiple file descriptors at once.
** 🦕
*/

#include "libft.h"

/*
** function : strdel
** Frees the memory allocated on a given string, then set it's value to 0.
** Important in the case of a static variable !
*/

static void	ft_strdel(char **saved)
{
	free(saved[0]);
	saved[0] = NULL;
}

/*
** function : empty_line
** Returns 0 and allocates a freeable empty string to line.
*/

int	empty_line(char **line)
{
	*line = (char *)malloc(sizeof(char) * 1);
	**line = '\0';
	return (0);
}

/*
** function : fill_static
** This function fills up the static char* with:
** 1. The buffer read if it's empty.
** 2. The previous value it contains + the new buffer read if not.
*/

static void	fill_static(char *buf, char **saved)
{
	char	*temp;

	if (!*saved)
		*saved = ft_strdup(buf);
	else
	{
		temp = ft_strjoin(*saved, buf);
		free(*saved);
		*saved = temp;
	}
}

/*
** function : create_line
** This function saves the *line and returns the int value of get_next_line.
** 1. We save the given buffer until the first newline into *line.
**    We jump to else and save the reminder of that line into the static.
**    If what's to be saved is '/0' => we free the static char*
** 2. If we have reached EOF and there's no new line, we save the static
**    into line, free the static, return 0.
*/

static int	create_line(char **line, char **saved)
{
	int		i;
	char	*cache;

	i = 0;
	while (saved[0][i] != '\n' && saved[0][i] != '\0')
		i++;
	if (saved[0][i] == '\n')
		*line = ft_substr(*saved, 0, i);
	if (saved[0][i] == '\0')
	{
		*line = ft_substr(*saved, 0, i);
		ft_strdel(saved);
		return (0);
	}
	else
	{
		cache = ft_strdup(*saved + (i + 1));
		free(*saved);
		*saved = cache;
		if (*saved[0] == '\0')
			ft_strdel(saved);
	}
	return (1);
}

/*
** function : get_next_line core
** This function executes get_next_line.
** 1. We check for various errors.
** 2. We allocate the buffer memory and fill it up in a loop until the
**    buffer ever contains a newline.
**    We free the buffer to avoid leaks.
** 2. If everything is empty, we've reached EOF, so we create a
**    a freeable string for *line.
** 3. We return create_line.
** Here we use an Buffer Array to handle multiple file descriptors at
** once. The maximum number you can get on Linus is 1024 but another
** solution could be to use the MAX_FD <limits.h> variable. Or lists.
*/

int	get_next_line(int fd, char **line)
{
	char		*buf;
	static char	*saved[1024];
	int			ret;

	if ((read(fd, 0, 0) == -1) || fd < 0 || fd >= 1024
		|| !line || BUFFER_SIZE < 1)
		return (-1);
	buf = (char *)malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (-1);
	ret = 1;
	while (ret > 0)
	{
		ret = read(fd, buf, BUFFER_SIZE);
		if (ret < 0)
			return (-1);
		buf[ret] = '\0';
		fill_static(buf, &saved[fd]);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	free(buf);
	if (!ret && !saved[fd])
		return (empty_line(line));
	return (create_line(line, &saved[fd]));
}
