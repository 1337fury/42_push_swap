/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:29:20 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/01/27 12:57:09 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big_stack(t_stack *a, t_stack *b, int len)
{
	move_to_b(a, b, len);
	sort_three(a);
	while (b->head != NULL)
	{
		get_target_position(a, b);
		calc_needed_moves(a, b);
		best_move(a, b);
	}
	if (!is_sorted(a))
		the_last_step(a);
}
