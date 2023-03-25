/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:39:51 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/01/17 11:57:17 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	high_rank(t_stack *a)
{
	int		high;
	t_list	*temp;

	temp = a->head;
	high = temp->data.rank;
	while (temp != NULL)
	{
		if (temp->data.rank > high)
			high = temp->data.rank;
		temp = temp->next;
	}
	return (high);
}

void	sort_three(t_stack *a)
{
	int	high;

	high = high_rank(a);
	if (a->head->data.rank == high)
		ft_ra(a, 0);
	else if (a->head->next->data.rank == high)
		ft_rra(a, 0);
	if (a->head->data.rank > a->head->next->data.rank)
		ft_sa(a, 0);
}
