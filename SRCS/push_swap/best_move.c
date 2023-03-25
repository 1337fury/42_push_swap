/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:19:14 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/02/20 21:59:59 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (nbr * -1);
	return (nbr);
}

void	best_move(t_stack *a, t_stack *b)
{
	t_list	*node;
	int		the_best;
	int		needs_a;
	int		needs_b;

	node = b->head;
	the_best = INT_MAX;
	while (node)
	{
		if (ft_abs(node->data.needs_a) + ft_abs(node->data.needs_b) < the_best)
		{
			the_best = ft_abs(node->data.needs_a) + ft_abs(node->data.needs_b);
			needs_a = node->data.needs_a;
			needs_b = node->data.needs_b;
		}
		node = node->next;
	}
	move(a, b, needs_a, needs_b);
}
