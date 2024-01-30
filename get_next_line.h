/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkros <dkros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:10:53 by dkros             #+#    #+#             */
/*   Updated: 2024/01/23 18:36:26 by dkros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

int		check_nl(char *string);
int		ft_strlen(char *string);
char	*ft_strjoin(char *remainder, char *buffer);
char	*read_file(int fd, char *remainder);
char	*get_the_line(char *buffer);
char	*get_remainder(char *buffer, char **line);
char	*get_next_line(int fd);
void	*free_func(char **target);

#endif
