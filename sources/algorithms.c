/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:45:34 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/11/04 20:43:04 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	dumb_sort(int *a, int *b, int a_size, int b_size)
{
	int	lowest_index;

	while (1)
	{
		lowest_index = find_lowest_number(a, a_size);
		if (lowest_index == 0 && a_size != 1)
			pb(&a, &b, &a_size, &b_size);
		else if (lowest_index == a_size - 1 && a_size != 1)
		{
			ra(&a, a_size);
			pb(&a, &b, &a_size, &b_size);
		}
		else if (a_size == 1)
		{
			printf("a size = %d, b size = %d\n", a_size, b_size);
			print_stack(b, b_size);
			while (b_size != 0)
				pa(&a, &b, &a_size, &b_size);
			break ;
		}
		else
			ra(&a, a_size);
	}
}

void	mini_sort(int *stack, int stack_size)
{
	if (stack_size == 1)
		return ;
	if (stack_size == 2)
	{
		sa(&stack);
		return ;
	}
	if (stack[1] > stack[0])
	{
		rra(&stack, stack_size);
		sa(&stack);
	}
	else
	{
		sa(&stack);
		rra(&stack, stack_size);
		sa(&stack);
	}
}
