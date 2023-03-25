/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 08:23:12 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/01/13 08:43:07 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	fill_data(t_list *node, t_data data)
{
	node->data.content = data.content;
	node->data.rank = data.rank;
	node->data.pos = data.pos;
	node->data.pos_to_be = data.pos_to_be;
	node->data.needs_a = data.needs_a;
	node->data.needs_b = data.needs_b;
}
