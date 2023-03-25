/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:39:52 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/03/23 18:35:07 by abdeel-o         ###   ########.fr       */
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

void	ft_start_sorting(t_stack *a, t_stack *b, int len)
{
	if (!is_sorted(a))
	{
		if (len == 2)
			ft_sa(a, 0);
		else if (len == 3)
			sort_three(a);
		else
			sort_big_stack(a, b, len);
	}
}

int	main(int ac, char *av[])
{
	t_args		*arguments;
	t_stacks	*stacks;

	if (ac < 2)
		return (1);
	arguments = (t_args *)malloc(sizeof(t_args));
	stacks = (t_stacks *)malloc(sizeof(t_stacks));
	if (!arguments || !stacks)
		return (1);
	init(arguments, stacks);
	get_started(arguments, stacks, ac, av);
	check_error(arguments, stacks);
	create_stacks(stacks, arguments);
	ft_start_sorting(stacks->a, stacks->b, arguments->counter);
	free_args_data(arguments);
	free_stacks(stacks);
	return (0);
}
