/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:36:41 by nvillalt          #+#    #+#             */
/*   Updated: 2023/12/22 13:31:12 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

int	ft_check_char(char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strdup_gnl(char *src)
{
	char	*s;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(src);
	s = ft_calloc(sizeof(char), len + 1);
	if (!s)
		return (0);
	while (src[i] != '\0')
	{
		s[i] = (char)src[i];
		i++;
	}
	return (s);
}

char	*ft_strjoin_gnl(char *saved, char *buffer)
{
	char	*join;
	int		i;
	int		j;

	i = 0;
	j = 0;
	join = ft_calloc(sizeof(char), ft_strlen(saved) + ft_strlen(buffer) + 1);
	if (!join)
		return (free(saved), NULL);
	while (saved && saved[i] != '\0')
	{
		join[i] = saved[i];
		i++;
	}
	while (buffer[j] != '\0')
	{
		join[i] = buffer[j];
		i++;
		j++;
	}
	free(saved);
	saved = 0;
	return (join);
}
