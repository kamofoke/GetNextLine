/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:29:26 by kamofoke          #+#    #+#             */
/*   Updated: 2019/06/25 09:32:31 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char*)dst;
	s = (char*)src;
	while (i < n)
	{
		d[i] = s[i];
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char*)dst + i + 1);
		i++;
	}
	return (NULL);
}
