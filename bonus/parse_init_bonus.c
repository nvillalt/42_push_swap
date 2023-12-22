/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_init_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:55:03 by nvillalt          #+#    #+#             */
/*   Updated: 2023/12/22 13:01:01 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	check_and_init(int argc, char **argv, t_data **stack_a)
{
	char	**params;
	int		flag;

	flag = 0;
	params = get_params(argc, argv);
	if (!params)
		return (0);
	flag = to_stack(params, stack_a);
	if (!flag || rep_stack(stack_a) > 0)
	{
		write(2, "Error.\n", 7);
		free_params(params);
		return (0);
	}
	if (check_order(stack_a) || !flag)
	{
		free_params(params);
		return (0);
	}
	init_index(stack_a, 0);
	free_params(params);
	return (1);
}