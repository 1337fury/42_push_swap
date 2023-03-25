/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 12:00:25 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/01/17 13:01:50 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_stack *a, t_stack *b, int i)
{
	int		a_size;
	t_list	*temp;
	t_list	*curr;

	if (b->head == NULL)
		return ;
	temp = b->head->next;
	a_size = ft_lstsize(a->head);
	if (a_size == 0)
	{
		a->head = ft_lstnew(b->head->data);
		a->tail = a->head;
		ft_lstdelone(b->head);
		b->head = temp;
		if (i != 1)
			ft_printf("pa\n");
		return ;
	}
	curr = ft_lstnew(b->head->data);
	ft_lstdelone(b->head);
	ft_lstadd_front(&(a->head), curr);
	b->head = temp;
	if (i != 1)
		ft_printf("pa\n");
}
