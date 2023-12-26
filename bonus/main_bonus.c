/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:05:15 by nvillalt          #+#    #+#             */
/*   Updated: 2023/12/26 20:01:41 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_data		*stack_a;
	t_data		*stack_b;
	char		*join;
	char		**commands;

	stack_a = NULL;
	stack_b = NULL;
	join = NULL;
	commands = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	if (check_and_init(argc, argv, &stack_a))
	{
		if (get_commands(&join))
		{
			commands = split_commands(&join);
			free(join);
		}	
	}
	free(commands);
	free_stack(&stack_a);
	return (0);
}
