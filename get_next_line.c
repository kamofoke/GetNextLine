/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 10:04:05 by kamofoke          #+#    #+#             */
/*   Updated: 2019/07/05 13:40:59 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "get_next_line.h"

int	new_line(char **str, char **line, int fd, int val)
{
	int		i;
	char	*tmp;

	i = 0;
	while (str[fd][i] != '\n' && str[fd][i] != '\0')
		i++;
	if (str[fd][i] == '\n')
	{
		*line = ft_strsub(str[fd], 0, i);
		tmp = ft_strsub(str[fd], i + 1, ft_strlen(str[fd]));
		free(str[fd]);
		str[fd] = tmp;
	}
	else if (str[fd][i] == '\0')
	{
		if (val == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
	}
	return (1);
}

int	get_next_line(int fd, char **line)
{
	static char	*str[1024];
	int			j;
	char		*temp;
	char		buff[BUFF_SIZE + 1];

	if (fd < 0 || !line)
		return (-1);
	while ((j = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[j] = '\0';
		if (!str[fd])
			str[fd] = ft_strnew(BUFF_SIZE);
		temp = ft_strjoin(str[fd], buff);
		free(str[fd]);
		str[fd] = temp;
		if (ft_strchr(buff, '\n'))
			break ;
		ft_strclr(buff);
	}
	if (j < 0)
		return (-1);
	else if (j == 0 && (str[fd] == NULL || str[fd][0] == '\0'))
		return (0);
	return (new_line(str, line, fd, j));
}
