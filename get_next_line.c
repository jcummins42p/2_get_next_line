/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:39:15 by jcummins          #+#    #+#             */
/*   Updated: 2023/11/24 15:11:55 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char			*buf;
	size_t			buf_size;
	static size_t	i;

	buf_size = 10;
	buf = malloc(sizeof(char) * buf_size);
	read(fd, buf, buf_size);
	while (i < buf_size)
	{
		if (buf[i] == '\n')
		{
			buf[i + 1] = '\0';
			return (buf);
		}
		i++;
	}
	/*printf("Read from file: %s\n", buf);*/
	return (buf);
}
