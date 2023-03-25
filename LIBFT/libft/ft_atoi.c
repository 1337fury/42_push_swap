/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 22:46:27 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/02/12 16:08:07 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	skiper(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && (str[i] == ' '
			|| str[i] == '\n'
			|| str[i] == '\f'
			|| str[i] == '\r'
			|| str[i] == '\t'
			|| str[i] == '\v'))
		i++;
	return (i);
}

long	ft_atoi(const char *str)
{
	int					i;
	int					n;
	long				res;

	res = 0;
	n = 1;
	i = skiper(str);
	if (!str[i])
		return (9999999999);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n = -n;
		i++;
	}
	if (str[i] == '\0')
		return (9999999999);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += (str[i++] - 48);
	}
	if (str[i] != '\0')
		return (9999999999);
	return (res * n);
}
