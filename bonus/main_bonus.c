/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:05:15 by nvillalt          #+#    #+#             */
/*   Updated: 2023/12/22 17:43:26 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_data		*stack_a;
	t_data		*stack_b;
	char		*commands;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	if (check_and_init(argc, argv, &stack_a))
		get_commands(&commands);
	free_stack(&stack_a);
	return (0);
}