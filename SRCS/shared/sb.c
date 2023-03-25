/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 12:34:59 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/01/17 12:20:37 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sb(t_stack *b, int i)
{
	t_list	*head;
	t_list	*next;
	int		node_count;

	node_count = ft_lstsize(b->head);
	if (node_count <= 1)
		return ;
	head = b->head;
	next = b->head->next;
	ft_swap(&(head->data.content), &(next->data.content));
	ft_swap(&(head->data.rank), &(next->data.rank));
	ft_swap(&(head->data.pos), &(next->data.pos));
	ft_swap(&(head->data.pos_to_be), &(next->data.pos_to_be));
	ft_swap(&(head->data.needs_a), &(next->data.needs_a));
	ft_swap(&(head->data.needs_b), &(next->data.needs_b));
	if (i != 1)
		ft_printf("sb\n");
}
