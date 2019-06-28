/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 14:51:21 by kamofoke          #+#    #+#             */
/*   Updated: 2019/06/20 14:14:06 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	unsigned int	st;
	unsigned int	e;
	unsigned int	i;
	unsigned int	wc;
	char			**split;

	wc = 0;
	split = NULL;
	i = 0;
	if (s && ((split = (char **)malloc(sizeof(*split) * ft_strlen(s)))))
	{
		while (i < ft_strlen(s))
		{
			while (s[i] == c && s[i])
				i++;
			st = i;
			while (s[i] != c && s[i])
				i++;
			e = i;
			if ((e - st) > 0)
				split[wc++] = ft_strsub(s, st, e - st);
		}
		split[wc] = 0;
	}
	return (split);
}
