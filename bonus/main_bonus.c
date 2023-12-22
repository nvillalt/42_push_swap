/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:05:15 by nvillalt          #+#    #+#             */
/*   Updated: 2023/12/22 13:34:59 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_data	*stack_a;

	stack_a = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	if (check_and_init(argc, argv, &stack_a))
	{
	
		if (check_instructions()) // Leer las instrucciones de la entrada estándar
			perform_instructions(&stack_a);
	}
	free_stack(&stack_a);
	return (0);
}