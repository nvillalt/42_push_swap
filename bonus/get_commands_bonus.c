/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_commands_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:13:46 by nvillalt          #+#    #+#             */
/*   Updated: 2023/12/22 17:52:13 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"
#include <stdio.h>
char	*get_commands()
{
	char	*str;
	char	*join;
	int		i;

	i = 0;
	str = get_next_line(0);
	while (str)
	{
		//ft_putstr(str);
		join = ft_strjoin(join, str);
		free(str);
		str = get_next_line(0);
	}
	printf("%s", join);
	system("leaks -q checker");
	return ("hla");
}