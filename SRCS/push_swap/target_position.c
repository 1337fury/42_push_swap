/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target_position.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 09:50:46 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/02/20 22:14:26 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checker(t_stack *a, int t_rank, int pos_to_be)
{
	t_list	*node;

	node = a->head;
	while (node)
	{
		if (node->data.rank < t_rank)
		{
			t_rank = node->data.rank;
			pos_to_be = node->data.pos;
		}
		node = node->next;
	}
	return (pos_to_be);
}

int	calc_position(t_stack *a, int rank, int t_rank)
{
	t_list	*node;
	int		pos_to_be;

	node = a->head;
	pos_to_be = 0;
	while (node)
	{
		if (node->data.rank > rank && node->data.rank < t_rank)
		{
			t_rank = node->data.rank;
			pos_to_be = node->data.pos;
		}
		node = node->next;
	}
	if (t_rank == INT_MAX)
		pos_to_be = checker(a, t_rank, pos_to_be);
	return (pos_to_be);
}

void	get_target_position(t_stack *a, t_stack *b)
{
	t_list	*temp;

	temp = b->head;
	set_position(a);
	set_position(b);
	while (temp)
	{
		temp->data.pos_to_be = calc_position(a, temp->data.rank, INT_MAX);
		temp = temp->next;
	}
}
