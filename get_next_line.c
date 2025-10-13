/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:54:34 by dufama            #+#    #+#             */
/*   Updated: 2025/10/13 12:48:24 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

#define BUFFER_SIZE 200




char	*get_next_line(int fd)
{
	static char	*stash;
	char		buff[BUFFER_SIZE + 1];
	char	*line;
	char	*new_line;
	size_t	byte_read;

	byte_read = 1;
	stash = NULL;
	while (byte_read > 0)
	{
		if (stash && ft_strchr(stash, '\n'))
			break;
		byte_read = read(fd, buff, BUFFER_SIZE);
		if (byte_read <= 0)
			break;
		buff[byte_read] = '\0';
		stash = strjoin_free(stash, buff);
		if (!stash)
			return (NULL);
	}
	if (!stash || *stash == '\0')
	{
		free(stash);
		stash = NULL;
		return (NULL);
	}
	new_line = ft_strchr(stash)


}

int main(void)
{
	int fd = open("coucou.txt", O_RDONLY);
	if (!fd)
		return (0);
	printf("%s\n", get_next_line(fd));

}
