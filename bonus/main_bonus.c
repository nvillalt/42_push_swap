/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:05:15 by nvillalt          #+#    #+#             */
/*   Updated: 2023/12/27 11:10:43 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	main(int argc, char **argv)
{
	t_data		*a;
	t_data		*b;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	if (check_and_init(argc, argv, &a) && get_commands(&a, &b))
	{
		if (a && check_order(&a) && !b)
			write (1, "OK\n", 3);
		else
			write (1, "KO\n", 3);
	}
	if (a)
		free_stack(&a);
	if (b)
		free_stack(&b);
	return (0);
}