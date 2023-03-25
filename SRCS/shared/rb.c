/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 13:59:23 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/01/17 12:20:46 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rb(t_stack *b, int i)
{
	t_list	*head;
	t_data	head_data;

	if (ft_lstsize(b->head) <= 1)
		return ;
	head_data = (t_data)
	{
		.content = 0,
		.rank = 0,
		.pos = 0,
		.pos_to_be = 0,
		.needs_a = 0,
		.needs_b = 0
	};
	head = b->head;
	head_data = get_data(head_data, head);
	while (head->next != NULL)
	{
		fill_data(head, head->next->data);
		head = head->next;
	}
	fill_data(b->tail, head_data);
	if (i != 1)
		ft_printf("rb\n");
}
