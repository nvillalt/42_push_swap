/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_commands_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:13:46 by nvillalt          #+#    #+#             */
/*   Updated: 2023/12/27 11:17:09 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static void	free_error(char *str, t_data **a, t_data **b)
{
	if (str)
		free(str);
	if (b)
		free_stack(b);
	if (a)
		free_stack(a);
	write(1, "KO\n", 3);
	return ;
}

static int	check_reverse(char *str, t_data **a, t_data **b)
{
	if (!ft_strcmp(str, "rra\n"))
		return (revrot_rrarrb(a));
	if (!ft_strcmp(str, "rrb\n"))
		return (revrot_rrarrb(b));
	if (!ft_strcmp(str, "rrr\n"))
		return (revrot_rrr(a, b));
	else
	{
		free_error(str, a, b);
		return (0);
	}
	return (0);
}

static int	check_and_execute(char *str, t_data **a, t_data **b)
{
	if (!ft_strcmp(str, "sa\n"))
		return (swap_sasb(a));
	if (!ft_strcmp(str, "sb\n"))
		return (swap_sasb(b));
	if (!ft_strcmp(str, "ss\n"))
		return (swap_ss(a, b));
	if (!ft_strcmp(str, "pa\n")) 
		return (push_pa(a, b));
	if (!ft_strcmp(str, "pb\n"))
		return (push_pb(a, b));
	if (!ft_strcmp(str, "ra\n"))
		return (rotate_rarb(a));
	if (!ft_strcmp(str, "rb\n"))
		return (rotate_rarb(b));
	if (!ft_strcmp(str, "rr\n"))
		return (rotate_rr(a, b));
	else
		return (check_reverse(str, a, b));
}

int	get_commands(t_data **a, t_data **b)
{
	char	*str;

	str = gnl_bonus(0);
	while (str && *str != '\n')
	{
		if (!check_and_execute(str, a, b))
			return (0);
		free(str);
		str = gnl_bonus(0);
	}
	free(str);
	return (1);
}
