/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_started.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:30:25 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/02/12 17:39:46 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check(t_args *arg, t_stacks *st, char *s)
{
	while (*s && (*s == ' ' || *s == '\t'))
		s++;
	if (*s == '\0')
	{
		free(arg->s_args);
		free(arg);
		arg = NULL;
		free(st);
		st = NULL;
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
}

void	get_started(t_args *arg, t_stacks *st, int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		check(arg, st, av[i]);
		arg->s_args = ft_strjoin(arg->s_args, av[i++]);
	}
	arg->args = ft_split(arg->s_args, ' ');
	arg->counter = counter(arg->s_args);
}
