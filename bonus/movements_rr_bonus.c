/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_rr_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:21:26 by nvillalt          #+#    #+#             */
/*   Updated: 2023/12/27 11:17:40 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	init_stack(t_data **stack, t_data **aux)
{
	*stack = *aux;
	(*aux)->next = *aux;
	(*aux)->back = *aux;
}

int	rotate_rarb(t_data **stack)
{
	if (*stack == NULL || stack == NULL)
		return (0);
	*stack = (*stack)->next;
	return (1);
}

int	rotate_rr(t_data **stack_a, t_data **stack_b)
{
	if (!(*stack_a) || !(*stack_b) || !stack_a || !stack_b)
		return (0);
	rotate_rarb(stack_a);
	rotate_rarb(stack_b);
	return (1);
}

int	revrot_rrarrb(t_data **stack)
{
	if (stack == NULL || *stack == NULL)
		return (0);
	*stack = (*stack)->back;
	return (1);
}

int	revrot_rrr(t_data **stack_a, t_data **stack_b)
{
	if (!(*stack_a) || !(*stack_b) || !stack_a || !stack_b)
		return (0);
	revrot_rrarrb(stack_a);
	revrot_rrarrb(stack_b);
	return (1);
}
