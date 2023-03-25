/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:00:45 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/03/02 15:51:14 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(t_args *arguments, t_stacks *stacks)
{
		arguments->s_args = NULL;
		arguments->args = NULL;
		arguments->counter = 0;
		stacks->a = NULL;
		stacks->b = NULL;
}

int	main(int ac, char *av[])
{
	t_args		*args;
	t_stacks	*s;

	if (ac < 2)
		return (1);
	args = (t_args *)malloc(sizeof(t_args));
	s = (t_stacks *)malloc(sizeof(t_stacks));
	if (!args || !s)
		return (1);
	init(args, s);
	get_started(args, s, ac, av);
	check_error(args, s);
	create_stacks(s, args);
	start_check_and_sort(STDIN, args, s);
	free_args_data(args);
	free_stacks(s);
	return (0);
}
