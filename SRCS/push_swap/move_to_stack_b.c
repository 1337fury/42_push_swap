/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_stack_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 09:26:42 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/02/12 11:53:54 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_to_b(t_stack *a, t_stack *b, int a_size)
{
	int	half;
	int	temp;
	int	index;

	half = a_size / 2;
	temp = a_size;
	index = 0;
	while (index < a_size)
	{
		if (a->head->data.rank <= half)
		{
			ft_pb(a, b, 0);
			temp--;
		}
		else
			ft_ra(a, 0);
		index++;
	}
	while (temp > 3)
	{
		ft_pb(a, b, 0);
		temp--;
	}
}
