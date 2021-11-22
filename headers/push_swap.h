/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 22:25:20 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/11/16 21:05:32 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"

typedef struct s_stack
{
	int				i;
	struct s_stack	*next;
}	t_stack;

typedef struct s_ps
{
	t_stack	*a;
	t_stack	*b;
	int		size;
}	t_ps;

/* Main Methods */
void	check(char **args, int size);
void	construct(t_ps *push, char **args, int size);
void	solve(t_ps *push);
void	clear(t_ps *push);

/* Stack Methods */
t_stack	*stack_new(int number);
void	stack_add_back(t_stack **stack, t_stack *new);
void	stack_add_front(t_stack **stack, t_stack *new);
t_stack	*stack_last(t_stack *node);
int		stack_size(t_stack *stack);

/* Push Swap Instructions */
void	sa(t_ps *push);
void	pb(t_ps *push);
void	pa(t_ps *push);
void	ra(t_ps *push);
void	rra(t_ps *push);

/* Error Handling */
void	exit_with_error(void);

/* Utils */
int		find_smallest_number(t_stack *stack);
int		is_sorted(t_stack *stack);

#endif
