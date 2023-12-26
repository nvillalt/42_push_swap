/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_commands_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:13:46 by nvillalt          #+#    #+#             */
/*   Updated: 2023/12/26 19:58:47 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

char	**split_commands(char **join)
{
	char **commands;

	commands = ft_split(*join, '\n');
	if (!commands)
		return (NULL);
	return (commands);	
}

static int	check_commands(char *str)
{
	if (!ft_strcmp(str, "sa\n"))
		return (1);
	if (!ft_strcmp(str, "sb\n"))
		return (1);
	if (!ft_strcmp(str, "ss\n"))
		return (1);
	if (!ft_strcmp(str, "pa\n")) 
		return (1);
	if (!ft_strcmp(str, "pb\n"))
		return (1);
	if (!ft_strcmp(str, "ra\n"))
		return (1);
	if (!ft_strcmp(str, "rb\n"))
		return (1);
	if (!ft_strcmp(str, "rr\n"))
		return (1);
	if (!ft_strcmp(str, "rra\n"))
		return (1);
	if (!ft_strcmp(str, "rrb\n"))
		return (1);
	if (!ft_strcmp(str, "rrr\n"))
		return (1);
	return (0);
}

int	get_commands(char **join)
{
	char	*str;

	str = gnl_bonus(0);
	*join = ft_strdup(str);
	if (!(*join))
		return (0);
	while (str)
	{
		if (!check_commands(str))
		{
			free(str);
			write(1, "KO\n", 3);
			return (0);
		}
		free(str);
		str = gnl_bonus(0);
		*join = ft_strjoin_gnl(*join, str);
		if (*str == '\n')
			break ;
	}
	free(str);
	return (1);
}
