/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 17:22:31 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/01/15 20:12:43 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stack *a, int i)
{
	t_list	*head;
	t_list	*next;
	int		node_count;

	node_count = ft_lstsize(a->head);
	if (node_count <= 1)
		return ;
	head = a->head;
	next = a->head->next;
	ft_swap(&(head->data.content), &(next->data.content));
	ft_swap(&(head->data.rank), &(next->data.rank));
	ft_swap(&(head->data.pos), &(next->data.pos));
	ft_swap(&(head->data.pos_to_be), &(next->data.pos_to_be));
	ft_swap(&(head->data.needs_a), &(next->data.needs_a));
	ft_swap(&(head->data.needs_b), &(next->data.needs_b));
	if (i != 1)
		ft_printf("sa\n");
}
