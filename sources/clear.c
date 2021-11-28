/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:07:49 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/11/22 11:07:50 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	stack_clear(t_stack **stack);

void	clear(t_ps *push)
{
	stack_clear(&(push->a));
	stack_clear(&(push->b));
}

static void	stack_clear(t_stack **stack)
{
	if (*stack)
	{
		stack_clear(&(*stack)->next);
		free(*stack);
		*stack = NULL;
	}
}

void	exit_with_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
