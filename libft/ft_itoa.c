/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 11:22:28 by kamofoke          #+#    #+#             */
/*   Updated: 2019/06/18 15:35:31 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int c)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	if (c == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (c < 0)
	{
		str[0] = '-';
		str[1] = '\0';
		str = ft_strjoin(str, ft_itoa(-c));
	}
	else if (c >= 10)
		str = ft_strjoin(ft_itoa(c / 10), ft_itoa(c % 10));
	else if (c < 10 && c >= 0)
	{
		str[0] = c + '0';
		str[1] = '\0';
	}
	return (str);
}
