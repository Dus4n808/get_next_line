/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:54:34 by dufama            #+#    #+#             */
/*   Updated: 2025/10/10 12:14:32 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

#define BUFFER_SIZE 200




char	*get_next_line(int fd)
{
	static char	*buff;
	char		*stash;
	int	byte;

	byte = read(fd, buff, BUFFER_SIZE);
	


}

int main(void)
{
	int fd = open("coucou.txt", O_RDONLY);
	if (!fd)
		return (0);
	printf("%s\n", get_next_line(fd));

}
