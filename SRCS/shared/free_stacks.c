/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:43:06 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/02/20 22:11:27 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stacks(t_stacks *stacks)
{
	t_list	*a;
	t_list	*b;

	if (stacks == NULL)
		return ;
	if (stacks->a)
	{
		a = stacks->a->head;
		ft_lstclear(&a);
		free(stacks->a);
	}
	if (stacks->b)
	{
		b = stacks->b->head;
		ft_lstclear(&b);
		free(stacks->b);
	}
	free(stacks);
	stacks = NULL;
}
