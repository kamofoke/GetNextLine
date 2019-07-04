/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 12:15:19 by kamofoke          #+#    #+#             */
/*   Updated: 2019/07/04 12:56:50 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "get_next_line.h"
#include <fcntl.h>
#include <stdlib.h>

int main(void)
{
	char	*line;
	int		fd;
	size_t	i;

	fd = open("testbook.txt", O_RDONLY);
	while (get_next_line(fd, &line) == 1)
	{
		ft_putendl(line);
		i++;
	}
	ft_putnbr(i);
	close(fd);
	return (0);
}
