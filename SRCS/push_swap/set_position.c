/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_position.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 09:51:56 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/02/12 19:28:06 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_position(t_stack *x)
{
	t_list	*node;
	int		i;

	node = x->head;
	i = 0;
	while (node)
	{
		node->data.pos = i++;
		node = node->next;
	}
}
