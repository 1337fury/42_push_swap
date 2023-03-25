/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_last_step.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 09:38:26 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/01/17 12:00:51 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min_pos(t_stack *a)
{
	t_list	*a_temp;
	int		min_rank;
	int		min_pos;

	a_temp = a->head;
	min_rank = INT_MAX;
	set_position(a);
	min_pos = a_temp->data.pos;
	while (a_temp != NULL)
	{
		if (a_temp->data.rank < min_rank)
		{
			min_rank = a_temp->data.rank;
			min_pos = a_temp->data.pos;
		}
		a_temp = a_temp->next;
	}
	return (min_pos);
}

void	the_last_step(t_stack *a)
{
	int	min_position;
	int	a_size;

	a_size = ft_lstsize(a->head);
	min_position = get_min_pos(a);
	if (min_position > a_size / 2)
	{
		while (min_position < a_size)
		{
			ft_rra(a, 0);
			min_position++;
		}
	}
	else
	{
		while (min_position > 0)
		{
			ft_ra(a, 0);
			min_position--;
		}
	}
}
