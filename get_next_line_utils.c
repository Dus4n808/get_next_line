/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:54:39 by dufama            #+#    #+#             */
/*   Updated: 2025/10/10 12:10:44 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*new_str;

	if (!s1 && !s2)
		return (NULL);
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	len = ft_strlen(s1) + ft_strlen(s2);
	new_str = malloc(len + 1);
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s1, ft_strlen(s1) + 1);
	ft_strlcat(new_str, s2, len + 1);
	return (new_str);
}
char	*ft_strchr(const char *s, int c)
{
	unsigned char	value;

	value = (unsigned char)c;
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
