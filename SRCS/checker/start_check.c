/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 14:33:54 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/03/02 16:23:03 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	destroy(t_args *args, t_stacks *s, char	*act)
{
	free(act);
	ft_exit(args, s);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (1)
	{
		if (s1[i] != s2[i])
			return (0);
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			if (s1[i] == '\0' && s2[i] == '\0')
				return (1);
			else
				return (0);
		}
		i++;
	}
	return (0);
}

void	do_actions(char	*act, t_args *args, t_stacks *s)
{
	if (ft_strcmp(act, "sa\n"))
		ft_sa(s->a, 1);
	else if (ft_strcmp(act, "sb\n"))
		ft_sb(s->b, 1);
	else if (ft_strcmp(act, "ss\n"))
		ft_ss(s->a, s->b, 1);
	else if (ft_strcmp(act, "pa\n"))
		ft_pa(s->a, s->b, 1);
	else if (ft_strcmp(act, "pb\n"))
		ft_pb(s->a, s->b, 1);
	else if (ft_strcmp(act, "ra\n"))
		ft_ra(s->a, 1);
	else if (ft_strcmp(act, "rb\n"))
		ft_rb(s->b, 1);
	else if (ft_strcmp(act, "rr\n"))
		ft_rr(s->a, s->b, 1);
	else if (ft_strcmp(act, "rra\n"))
		ft_rra(s->a, 1);
	else if (ft_strcmp(act, "rrb\n"))
		ft_rrb(s->b, 1);
	else if (ft_strcmp(act, "rrr\n"))
		ft_rrr(s->a, s->b, 1);
	else
		destroy(args, s, act);
}

void	start_check_and_sort(int fd, t_args *args, t_stacks *s)
{
	char	*action;

	action = get_next_line(fd);
	while (action != NULL)
	{
		do_actions(action, args, s);
		free(action);
		action = get_next_line(fd);
	}
	close(fd);
	if (is_sorted(s->a) && s->b->head == NULL)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}
