/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 13:35:42 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/01/15 20:12:23 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stack *a, int i)
{
	t_list	*head;
	t_data	head_data;

	if (ft_lstsize(a->head) <= 1)
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
	head = a->head;
	head_data = get_data(head_data, head);
	while (head->next != NULL)
	{
		fill_data(head, head->next->data);
		head = head->next;
	}
	fill_data(a->tail, head_data);
	if (i != 1)
		ft_printf("ra\n");
}
