/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:11:45 by nvillalt          #+#    #+#             */
/*   Updated: 2023/12/22 13:30:05 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1
#endif

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

/* MAIN FILE FUNCTIONS */
char	*get_next_line(int fd);

/* AUXILIARY FUNCTIONS */
char	*ft_strjoin_gnl(char *s1, char *s2);
char	*ft_strdup_gnl(char *src);
//char	*ft_strchr(char *str, int c);
int	ft_check_char(char *str, int c);

#endif