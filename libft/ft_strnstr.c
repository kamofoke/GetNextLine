/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 17:30:51 by kamofoke          #+#    #+#             */
/*   Updated: 2019/06/14 13:57:15 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	k;
	char	*ptr;
	char	*ptr2;

	i = 0;
	ptr = (char *)s1;
	ptr2 = (char *)s2;
	if (ptr2[i] == '\0')
		return (ptr);
	while (i < len && s1[i] != '\0')
	{
		k = 0;
		while (i + k < len && s1[i + k] == s2[k] && s2[k] != '\0')
		{
			k++;
		}
		if (s2[k] == '\0')
		{
			return ((char *)s1 + i);
		}
		i++;
	}
	return (NULL);
}
