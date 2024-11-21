/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:49:31 by adamarqu          #+#    #+#             */
/*   Updated: 2024/11/19 12:49:34 by adamarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	len1;
	size_t	len2;

	len1 = 0;
	len2 = 0;
	if (s2)
		len2 = ft_strlen(s2);
	if (s1)
		len1 = ft_strlen(s1);
	str = ft_calloc(len1 + len2 + 1, sizeof(char));
	if (!str)
		return (ft_free(&s1), NULL);
	i = -1;
	while (++i < len1)
		str[i] = s1[i];
	j = -1;
	while (++j < len2)
		str[i + j] = s2[j];
	str[i + j] = '\0';
	return (ft_free(&s1), str);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strndup(const char *s, int lenght)
{
	int		i;
	char	*new;

	new = malloc(sizeof(char) * (lenght + 1));
	if (new == NULL)
		return (ft_free(&new), NULL);
	if (lenght == 0)
		return (ft_free(&new), NULL);
	i = 0;
	while (i < lenght)
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

void	ft_free(char **temp)
{
	if (temp && *temp)
	{
		free(*temp);
		*temp = NULL;
	}
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*new;

	i = 0;
	new = malloc(ft_strlen(src) + 1);
	if (!new)
		return (NULL);
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}