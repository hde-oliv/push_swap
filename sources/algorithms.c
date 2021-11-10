/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:45:34 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/11/10 20:56:39 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	dumb_sort(int *a, int *b, int a_size, int b_size)
{
	int	lowest_index;

	while (!is_sorted(a, a_size))
	{
		lowest_index = find_lowest_number(a, a_size);
		if (lowest_index == 0 && a_size != 1)
			pb(&a, &b, &a_size, &b_size);
		else if (lowest_index < a_size / 2)
			ra(&a, a_size);
		else
			rra(&a, a_size);
	}
	while (b_size != 0)
		pa(&a, &b, &a_size, &b_size);
}

void	mini_sort(int *stack, int stack_size)
{
	if (stack_size == 1)
		return ;
	if (stack_size == 2)
	{
		sa(&stack, stack_size);
		return ;
	}
	if (stack[1] > stack[0])
	{
		rra(&stack, stack_size);
		sa(&stack, stack_size);
	}
	else
	{
		sa(&stack, stack_size);
		rra(&stack, stack_size);
		sa(&stack, stack_size);
	}
}
