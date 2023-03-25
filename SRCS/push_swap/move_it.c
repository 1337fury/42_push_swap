/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 09:26:29 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/03/02 13:06:57 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra_rrb(t_stack *a, t_stack *b, int *needs_a, int *needs_b)
{
	while (*needs_a < 0 && *needs_b < 0)
	{
		(*needs_a)++;
		(*needs_b)++;
		ft_rrr(a, b, 0);
	}
}

void	ra_rb(t_stack *a, t_stack *b, int *needs_a, int *needs_b)
{
	while (*needs_a > 0 && *needs_b > 0)
	{
		(*needs_a)--;
		(*needs_b)--;
		ft_rr(a, b, 0);
	}
}

void	rotate_a(t_stack *a, int *needs_a)
{
	while (*needs_a)
	{
		if (*needs_a > 0)
		{
			ft_ra(a, 0);
			(*needs_a)--;
		}	
		else if (*needs_a < 0)
		{
			ft_rra(a, 0);
			(*needs_a)++;
		}
	}
}

void	rotate_b(t_stack *b, int *needs_b)
{
	while (*needs_b)
	{
		if (*needs_b > 0)
		{
			ft_rb(b, 0);
			(*needs_b)--;
		}	
		else if (*needs_b < 0)
		{
			ft_rrb(b, 0);
			(*needs_b)++;
		}
	}
}

void	move(t_stack *a, t_stack *b, int needs_a, int needs_b)
{
	if (needs_a < 0 && needs_b < 0)
		rra_rrb(a, b, &needs_a, &needs_b);
	else if (needs_a > 0 && needs_b > 0)
		ra_rb(a, b, &needs_a, &needs_b);
	rotate_a(a, &needs_a);
	rotate_b(b, &needs_b);
	ft_pa(a, b, 0);
}
