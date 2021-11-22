/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:08:09 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/11/22 11:08:10 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_new(int number)
{
	t_stack	*new;

	new = (t_stack *) malloc(sizeof(t_stack) * 1);
	if (!new)
		exit_with_error();
	new->i = number;
	new->next = NULL;
	return (new);
}

void	stack_add_front(t_stack **stack, t_stack *new)
{
	new->next = *stack;
	*stack = new;
}

void	stack_add_back(t_stack **stack, t_stack *new)
{
	t_stack	*last;

	if ((*stack) == NULL)
	{
		*stack = new;
		return ;
	}
	last = stack_last((*stack));
	last->next = new;
}

t_stack	*stack_last(t_stack *node)
{
	while (node->next != NULL)
		node = node->next;
	return (node);
}

int	stack_size(t_stack *stack)
{
	size_t	size;

	if (stack == NULL)
		return (0);
	size = 1;
	while (stack->next != NULL)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}
