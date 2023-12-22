/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_check_len_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:14:03 by nvillalt          #+#    #+#             */
/*   Updated: 2023/12/22 16:14:05 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static int	skip_zero(char *params)
{
	int	j;
	int	count;

	count = 0;
	j = 0;
	while (params[j] == '-' || params[j] == '+')
	{
		count++;
		j++;
	}
	while (params[j] == '0')
		j++;
	while (params[j] != '0' && params[j] != '\0')
	{
		j++;
		count++;
	}
	return (count);
}

int		check_len(char **params)
{
	int	count;
	int	i;

	i = 0;
	while (params[i])
	{
		if (ft_strlen(params[i]) == 1 && (params[i][0] == '-'
			|| params[i][0] == '+'))
			return (0);
		count = skip_zero(params[i]);
		if ((params[i][0] == '-' || params[i][0] == '+')
			&& count > 11)
			return (0);
		if ((params[i][0] != '-' || params[i][0] != '+')
			&& count > 10)
			return (0);
		i++;
	}
	return (1);
}