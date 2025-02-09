/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:49:11 by adamarqu          #+#    #+#             */
/*   Updated: 2024/11/19 12:49:16 by adamarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# define MAX_FD 1024

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <limits.h>
# include <stdint.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strndup(const char *s, int i);
char	*ft_read(int fd, char *temp);
char	*ft_clean(char *temp);
char	*ft_strdup(char *src);
char	*ft_calloc(size_t count, size_t size);
int		ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *str);
void	ft_free(char **temp);

#endif
