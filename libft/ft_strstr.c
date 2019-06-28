/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 16:13:52 by kamofoke          #+#    #+#             */
/*   Updated: 2019/06/25 09:41:56 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	if (s1[0] == '\0' && s2[0] == '\0')
	{
		return ((char *)s1);
	}
	while (s1[i] != '\0')
	{
		k = 0;
		while (s2[k] != '\0' && s1[i + k] == s2[k])
			k++;
		if (s2[k] == '\0')
		{
			return ((char *)s1 + i);
		}
		i++;
	}
	return (NULL);
}
