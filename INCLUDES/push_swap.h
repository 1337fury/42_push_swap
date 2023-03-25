/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:37:38 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/03/02 16:23:32 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"
# include "libft.h"
# include "get_next_line.h"
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# define STDIN 0

typedef struct s_args
{
	char	*s_args;
	char	**args;
	int		counter;
}	t_args;

typedef struct s_stack
{
	struct s_list	*head;
	struct s_list	*tail;
}	t_stack;

typedef struct s_stacks
{
	struct s_stack	*a;
	struct s_stack	*b;
}	t_stacks;

void	get_started(t_args *arg, t_stacks *st, int ac, char **av);
void	sort_big_stack(t_stack *a, t_stack *b, int len);
t_stack	*create_stack_b(int counter);
void	move_to_b(t_stack *a, t_stack *b, int a_size);
void	sort_three(t_stack *a);
void	get_target_position(t_stack *a, t_stack *b);
void	calc_needed_moves(t_stack *a, t_stack *b);
void	best_move(t_stack *a, t_stack *b);
void	move(t_stack *a, t_stack *b, int needs_a, int needs_b);
void	the_last_step(t_stack *a);
void	free_double(char **tab);
void	set_position(t_stack *x);
void	check_error(t_args *arguments, t_stacks *st);
int		counter(char *args);
void	ft_swap(int *a, int *b);
int		*bubble_sort(int *arr, int size);
void	create_stacks(t_stacks *st, t_args *arg);
t_data	get_data(t_data data, t_list *from);
int		is_sorted(t_stack *x);
void	free_stacks(t_stacks *stacks);
void	free_args_data(t_args *arguments);
void	ft_exit(t_args *arguments, t_stacks *stacks);
void	ft_sa(t_stack *a, int i);
void	ft_sb(t_stack *b, int i);
void	ft_ss(t_stack *a, t_stack *b, int i);
void	ft_pb(t_stack *a, t_stack *b, int i);
void	ft_pa(t_stack *a, t_stack *b, int i);
void	ft_ra(t_stack *a, int i);
void	ft_rb(t_stack *b, int i);
void	ft_rr(t_stack *a, t_stack *b, int i);
void	ft_rra(t_stack *a, int i);
void	ft_rrb(t_stack *b, int i);
void	ft_rrr(t_stack *a, t_stack *b, int i);
void	start_check_and_sort(int fd, t_args *args, t_stacks *s);

#endif