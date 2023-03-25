/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_arguments.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:43:03 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/03/02 15:45:04 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_args_data(t_args *arguments)
{
	int	i;

	i = 0;
	if (arguments == NULL)
		return ;
	if (arguments->s_args != NULL)
		free(arguments->s_args);
	if (arguments->args != NULL)
	{
		if (arguments->args[i] != NULL)
		{
			while (i < arguments->counter)
				free(arguments->args[i++]);
			free(arguments->args);
		}	
	}
	arguments->counter = 0;
	free(arguments);
	arguments = NULL;
}
