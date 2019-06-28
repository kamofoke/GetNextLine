/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 16:58:22 by kamofoke          #+#    #+#             */
/*   Updated: 2019/06/15 11:16:20 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	i = 0;
	while (ft_whitespace(s[i]))
		i++;
	j = ft_strlen(s);
	while (ft_whitespace(s[j - 1]))
	{
		j--;
	}
	if (j < i)
	{
		j = i;
	}
	return (ft_strsub(s, i, j - i));
}
