/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stacks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 19:58:53 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/03/02 13:10:34 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_rank(t_list *node, t_args *arg, t_stacks *st)
{
	int	*integers;
	int	i;
	int	rank;

	integers = (int *)malloc(sizeof(int) * arg->counter);
	if (!integers)
		ft_exit(arg, st);
	i = 0;
	while (i < arg->counter)
	{
		integers[i] = ft_atoi(arg->args[i]);
		i++;
	}
	integers = bubble_sort(integers, arg->counter);
	i = 0;
	rank = 1;
	while (i < arg->counter)
	{
		if (integers[i] == node->data.content)
			node->data.rank = rank;
		i++;
		rank++;
	}
	free(integers);
}

t_stack	*create_stack_a(t_stacks *st, t_args *arg)
{
	t_stack	*stack;
	t_list	*curr;
	t_data	data;
	int		index;

	data = (t_data){.content = 0, .rank = 0, .pos = 0,
		.pos_to_be = 0, .needs_a = 0, .needs_b = 0};
	index = 0;
	data.content = ft_atoi(arg->args[index]);
	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		ft_exit(arg, st);
	stack->head = ft_lstnew(data);
	set_rank(stack->head, arg, st);
	stack->tail = stack->head;
	while (++index < arg->counter)
	{
		data.content = ft_atoi(arg->args[index]);
		curr = ft_lstnew(data);
		set_rank(curr, arg, st);
		curr->prev = stack->tail;
		stack->tail->next = curr;
		stack->tail = curr;
	}
	return (stack);
}

void	create_stacks(t_stacks *st, t_args *arg)
{
	st->b = (t_stack *)malloc(sizeof(t_stack));
	if (!st->b)
		ft_exit(arg, st);
	st->b->head = NULL;
	st->b->tail = NULL;
	st->a = create_stack_a(st, arg);
	if (!st->a)
		ft_exit(arg, st);
}
