/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:54:39 by dufama            #+#    #+#             */
/*   Updated: 2025/10/14 17:23:20 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*strjoin_free(char *s1, char *s2)
{
	char	*new_string;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1)
	{
		s1 = (char *)malloc(1);
		if (!s1)
			return (NULL);
		s1[0] = '\0';
	}
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	new_string = malloc(len_s1 + len_s2 + 1);
	if (!new_string)
	{
		free(s1);
		return (NULL);
	}
	ft_memcpy(new_string, s1, len_s1);
	ft_memcpy(new_string + len_s1, s2, len_s2 + 1);
	free(s1);
	return (new_string);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned char	value;

	value = (unsigned char)c;
	if (!s)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == value)
			return ((char *)s);
		s++;
	}
	if (value == '\0')
		return ((char *)s);
	return (NULL);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dst);
}

char	*ft_strdup(char *s)
{
	size_t	size;
	char	*new;
	size_t	i;

	i = 0;
	size = ft_strlen(s);
	new = malloc(size + 1);
	if (!new)
		return (NULL);
	while (s[i] != '\0')
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
