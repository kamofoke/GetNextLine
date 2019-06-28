/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:36:24 by kamofoke          #+#    #+#             */
/*   Updated: 2019/06/12 17:20:20 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	j;
	size_t	k;

	j = 0;
	k = 0;
	while (dest[j] && j < size)
	{
		j++;
	}
	while ((src[k]) && ((j + k + 1) < size))
	{
		dest[j + k] = src[k];
		k++;
	}
	if (j != size)
		dest[j + k] = '\0';
	return (j + ft_strlen(src));
}
