/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 22:21:51 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/01/16 12:00:21 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*suivant;

	suivant = *lst;
	if (!lst)
		return ;
	while (*lst != NULL)
	{
		suivant = suivant->next;
		free(*lst);
		*lst = suivant;
	}
	*lst = NULL;
}
