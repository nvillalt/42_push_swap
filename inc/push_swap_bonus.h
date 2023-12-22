/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 11:02:39 by nvillalt          #+#    #+#             */
/*   Updated: 2023/12/22 11:04:11 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <limits.h>
# include <unistd.h>
# include <stdlib.h>
# include <libft.h>
# include <stdbool.h>

typedef struct s_data
{
	int				value;
	int				index;
	int				stack_index;
	int				above_half;
	int				cheapest;
	int				cost;
	int				group;
	struct s_data	*next;
	struct s_data	*back;
	struct s_data	*target;
}t_data;

// MOVEMENT FUNCTIONS
void	swap_sasb(t_data **stack, int op);
void	swap_ss(t_data **stack_a, t_data **stack_b);
void	push_pa(t_data **stack_a, t_data **stack_b);
void	push_pb(t_data **stack_a, t_data **stack_b);
void	rotate_rarb(t_data **stack, int op);
void	rotate_rr(t_data **stack_a, t_data **stack_b);
void	revrot_rrarrb(t_data **stack, int op);
void	revrot_rrr(t_data **stack_a, t_data **stack_b);
void	init_stack(t_data **stack_b, t_data **aux);

#endif