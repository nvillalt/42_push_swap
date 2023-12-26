#include "push_swap_bonus.h"
#include <stdio.h>
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
static char	*join_str()
{
	char	*join;
	char	*str;

	str = gnl_bonus(0);
	join = ft_strdup(str);
	if (!join)
		return (0);
	while (str && *str != '\n')
	{
		if (!check_commands(str))
		{
			free(str);
			free(join);
			write(1, "KO\n", 3);
			return (NULL);
		}
		free(str);
		str = gnl_bonus(0);
		join = ft_strjoin_gnl(join, str);
	}
	free(str);
	return (join);
}

char	**get_commands()
{
	char	**commands;
	char	*str;

	str = join_str();
	if (!str)
		return (NULL);
	commands = ft_split(str, '\n');
	free(str);
	if (!commands)
		return (NULL);
	return (commands);
}