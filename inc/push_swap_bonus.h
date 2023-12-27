/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 11:02:39 by nvillalt          #+#    #+#             */
/*   Updated: 2023/12/27 11:16:50 by nvillalt         ###   ########.fr       */
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

// PARSE UTILS
char	*join_params(int argc, char **argv);
int		rep_params(char **argv);
int		check_num(char **argv);
int		check_order(t_data **stack_a);
int		check_len(char **params);
int		check_and_init(int argc, char **argv, t_data **stack_a);
void	free_params(char **params);

// LIST UTILS
t_data	*new_node(int value);
t_data	*list_last(t_data **head);
void	free_stack(t_data **head);
void	add_front_lst(t_data **stack_a, t_data **stack_b, t_data **aux);
void	add_back_lst(t_data **head, t_data *node);
int		list_len(t_data **stack);
int		find_min_no_index(t_data **stack_a);
int		check_max(t_data **head);
int		rep_stack(t_data **stack);

// GET COMMANDS
int		get_commands(t_data **a, t_data **b);
char	*gnl_bonus(int fd);

// MOVEMENT FUNCTIONS
int		swap_sasb(t_data **stack);
int		swap_ss(t_data **stack_a, t_data **stack_b);
int		push_pa(t_data **stack_a, t_data **stack_b);
int		push_pb(t_data **stack_a, t_data **stack_b);
int		rotate_rarb(t_data **stack);
int		rotate_rr(t_data **stack_a, t_data **stack_b);
int		revrot_rrarrb(t_data **stack);
int		revrot_rrr(t_data **stack_a, t_data **stack_b);
void	init_stack(t_data **stack_b, t_data **aux);

#endif