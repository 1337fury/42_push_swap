/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:45:59 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/03/02 15:43:37 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(t_args *arguments, t_stacks *stacks)
{
	free_args_data(arguments);
	free_stacks(stacks);
	write(2, "Error\n", 6);
	exit(1);
}
