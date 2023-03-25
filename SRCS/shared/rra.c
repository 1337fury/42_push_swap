/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 14:42:16 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/01/15 20:12:32 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_stack *a, int i)
{
	t_list	*tail;
	t_data	tail_data;

	if (ft_lstsize(a->head) <= 1)
		return ;
	tail_data = (t_data)
	{
		.content = 0,
		.rank = 0,
		.pos = 0,
		.pos_to_be = 0,
		.needs_a = 0,
		.needs_b = 0
	};
	tail = a->tail;
	tail_data = get_data(tail_data, tail);
	while (tail->prev != NULL)
	{
		fill_data(tail, tail->prev->data);
		tail = tail->prev;
	}
	fill_data(a->head, tail_data);
	if (i != 1)
		ft_printf("rra\n");
}
