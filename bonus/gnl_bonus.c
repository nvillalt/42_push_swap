/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:13:46 by nvillalt          #+#    #+#             */
/*   Updated: 2023/12/26 19:19:32 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static char	*read_command(int fd, char *line)
{
	char	*buffer;
	int		rchar;

	rchar = 1;
	buffer = ft_calloc(sizeof(char), (1 + 1));
	if (!buffer)
		return (NULL);
	while (rchar > 0 && !ft_strchr(buffer, '\n'))
	{
		rchar = read(fd, buffer, 1);
		if (rchar == -1)
		{
			free(buffer);
			return (NULL);
		}
		if (rchar > 0)
		{
			buffer[rchar] = '\0';
			line = ft_strjoin_gnl(line, buffer);
		}
	}
	free(buffer);
	return (line);
}

char	*gnl_bonus(int fd)
{
	char	*saved;
	char	*line;

	line = NULL;
	if (fd < 0)
		return (NULL);
	saved = read_command(fd, line);
	return (saved);
}