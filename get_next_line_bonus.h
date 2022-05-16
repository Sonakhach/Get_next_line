/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:03:32 by sokhacha          #+#    #+#             */
/*   Updated: 2022/04/21 15:22:32 by sokhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <fcntl.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
#include <stdio.h>

char	*get_next_line_bonus(int fd);
char	*ft_strdup(char	*s1);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(char	*s, int c);
size_t	ft_strlen(char *s);
char	*ft_substr(char	*s, unsigned int start, size_t len);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

#endif
