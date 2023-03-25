/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 08:25:57 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/01/13 09:34:54 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	get_data(t_data data, t_list *from)
{
	data.content = from->data.content;
	data.rank = from->data.rank;
	data.pos = from->data.pos;
	data.pos_to_be = from->data.pos_to_be;
	data.needs_a = from->data.needs_a;
	data.needs_b = from->data.needs_b;
	return (data);
}
