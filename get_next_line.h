/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:13:08 by adamarqu          #+#    #+#             */
/*   Updated: 2024/11/05 14:15:10 by adamarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10 
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	char			*str_buf;
	struct s_list	*next;
}				t_list;



char	*get_line(t_list *list);
void	polish_list(t_list **list);
char	*get_next_line(int fd);
void	create_list(t_list **list, int fd);
int	found_newline(t_list *list);
t_list	*find_last_node(t_list *list);
void	copy_str(t_list *list, char *str);
int	len_to_newline(t_list *list);
void	dealloc(t_list **list, t_list *clean_node, char *buf);

#endif
