/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:48:40 by adamarqu          #+#    #+#             */
/*   Updated: 2024/11/19 12:48:43 by adamarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (-1);
	while (s[i] && s[i] != c)
		i++;
	if (s[i] == c)
		return (i);
	return (-1);
}

char	*ft_read(int fd, char *temp)
{
	char	*temp_buff;
	int		count;

	count = 1;
	temp_buff = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	while (count > 0 && ft_strchr(temp, '\n') <= 0)
	{
		if (!temp_buff)
			return (NULL);
		count = read(fd, temp_buff, BUFFER_SIZE);
		if (count == -1)
		{
			ft_free(&temp_buff);
			ft_free(&temp);
			return (NULL);
		}
		if (count == 0)
			return (ft_free(&temp_buff), temp);
		temp_buff[count] = '\0';
		temp = ft_strjoin(temp, temp_buff);
	}
	ft_free(&temp_buff);
	return (temp);
}

char	*ft_clean(char *temp)
{
	char	*str;
	int		i;

	i = 0;
	while (temp[i])
	{
		if ((temp[i] == '\n' && temp[i + 1] == '\n') || temp[i] == '\n')
		{
			i++;
			break ;
		}
		i++;
	}
	str = ft_strdup(temp + i);
	ft_free(&temp);
	if (ft_strlen(str) == 0)
		return (ft_free(&str), NULL);
	else
		return (str);
	return (NULL);
}

char	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	bytes;
	int		i;

	i = 0;
	if (count == 0 || size == 0)
		return (malloc(0));
	if (count > SIZE_MAX / size)
		return (NULL);
	bytes = count * size;
	ptr = malloc(bytes);
	if (ptr == NULL)
		return (NULL);
	while (bytes--)
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}

char	*get_next_line(int fd)
{
	static char	*temp[MAX_FD];
	char		*line;
	char		*temp2;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	temp[fd] = ft_read(fd, temp[fd]);
	if (!temp[fd])
		return (NULL);
	if (ft_strlen(temp[fd]) == 0)
		return (NULL);
	if (ft_strchr(temp[fd], '\n') >= 0)
		temp2 = ft_strndup(temp[fd], ft_strchr(temp[fd], '\n') + 1);
	else if (ft_strchr(temp[fd], '\0') >= 0)
		temp2 = ft_strndup(temp[fd], ft_strchr(temp[fd], '\0'));
	else
		return (NULL);
	line = ft_strjoin(line, temp2);
	temp[fd] = ft_clean(temp[fd]);
	if (!line)
		return (ft_free(&temp2), NULL);
	return (ft_free(&temp2), line);
}
