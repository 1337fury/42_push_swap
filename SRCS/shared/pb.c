/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 13:15:33 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/01/17 13:01:40 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_stack *a, t_stack *b, int i)
{
	int		b_size;
	t_list	*curr;
	t_list	*temp;

	if (a->head == NULL)
		return ;
	temp = a->head->next;
	b_size = ft_lstsize(b->head);
	if (b_size == 0)
	{
		b->head = ft_lstnew(a->head->data);
		b->tail = b->head;
		ft_lstdelone(a->head);
		a->head = temp;
		if (i != 1)
			ft_printf("pb\n");
		return ;
	}
	curr = ft_lstnew(a->head->data);
	ft_lstdelone(a->head);
	ft_lstadd_front(&(b->head), curr);
	a->head = temp;
	if (i != 1)
		ft_printf("pb\n");
}
