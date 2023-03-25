/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 19:35:47 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/01/15 19:40:52 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *x)
{
	t_list	*temp;

	temp = x->head;
	while (temp->next != NULL)
	{
		if (temp->data.rank + 1 == temp->next->data.rank)
			temp = temp->next;
		else
			return (0);
	}
	return (1);
}
