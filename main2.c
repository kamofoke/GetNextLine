/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 13:49:44 by kamofoke          #+#    #+#             */
/*   Updated: 2019/07/04 11:58:02 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "get_next_line.h"
#include "fcntl.h"
#include "stdlib.h"

int	main(int ac, char **av)
{
	int		fd;
	int		fd2;
	char	*line;
	size_t	i;
	
	if(ac < 2)
		return (0);
	fd = open(av[1], O_RDONLY);
	while(get_next_line(fd, &line) > 0)
	{
		ft_putendl(line);
		i++;
	}
	/*ft_putstr("\n");
	fd2 = open(av[2], O_RDONLY);
	while(get_next_line(fd2, &line) > 0)
	{
		ft_putendl(line);
		i++; 
	}*/
	ft_putnbr(i);
	close(fd);
	return (0);
}
