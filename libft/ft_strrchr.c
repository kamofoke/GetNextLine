/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:44:56 by kamofoke          #+#    #+#             */
/*   Updated: 2019/06/13 12:18:05 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = (0);
	while (*s)
	{
		if (*s == c)
			str = (char *)s;
		++s;
	}
	if (str)
		return (str);
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (0);
}
