/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   needed_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:18:45 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/02/20 22:12:02 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	calc_needed_moves(t_stack *a, t_stack *b)
{
	int		sa_size;
	int		sb_size;
	t_list	*node;

	sa_size = ft_lstsize(a->head);
	sb_size = ft_lstsize(b->head);
	node = b->head;
	while (node)
	{
		node->data.needs_b = node->data.pos;
		if (node->data.needs_b > sb_size / 2)
			node->data.needs_b = (sb_size - node->data.pos) * -1;
		node->data.needs_a = node->data.pos_to_be;
		if (node->data.needs_a > sa_size / 2)
			node->data.needs_a = (sa_size - node->data.needs_a) * -1;
		node = node->next;
	}
}
