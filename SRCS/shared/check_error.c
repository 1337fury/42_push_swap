/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:21:34 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/03/02 15:49:40 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_int(char **args)
{
	int	i;

	i = 0;
	if (!args)
		return (0);
	while (args[i])
	{
		if (ft_atoi(args[i]) == 9999999999)
			return (0);
		i++;
	}
	return (1);
}

int	check_max(char **args)
{
	long	result;
	int		i;

	i = 0;
	if (!args)
		return (0);
	while (args[i])
	{
		result = ft_atoi(args[i]);
		if (result > INT_MAX || result < INT_MIN)
			return (0);
		i++;
	}
	return (1);
}

int	check_dup(t_args *arguments)
{
	int	*integers;
	int	i;

	integers = (int *)malloc(sizeof(int) * arguments->counter);
	if (!integers)
		ft_exit(arguments, NULL);
	i = 0;
	while (i < arguments->counter)
	{
		integers[i] = ft_atoi(arguments->args[i]);
		i++;
	}
	integers = bubble_sort(integers, arguments->counter);
	i = 0;
	while (i < arguments->counter - 1)
	{
		if (integers[i] == integers[i + 1])
		{
			free(integers);
			return (0);
		}
		i++;
	}
	free(integers);
	return (1);
}

void	check_error(t_args *arguments, t_stacks *st)
{
	int		check;

	check = 0;
	check += check_int(arguments->args);
	check += check_max(arguments->args);
	check += check_dup(arguments);
	if (check != 3)
		ft_exit(arguments, st);
}
