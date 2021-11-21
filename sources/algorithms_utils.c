/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 20:12:45 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/11/18 08:31:11 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_number_index(int *stack, int stack_size, int number)
{
	int	i;

	i = 0;
	while (i < stack_size)
	{
		if (stack[i] == number)
			return (i);
		i++;
	}
	return (i);
}

static void	bubble_sort(int **stack, int stack_size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while (i < stack_size)
	{
		j = 1;
		while (j < (stack_size - i))
		{
			if ((*stack)[j] < (*stack)[j - 1])
			{
				tmp = (*stack)[j];
				(*stack)[j] = (*stack)[j - 1];
				(*stack)[j - 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	simplify_array(int **stack, int stack_size)
{
	int	i;
	int	j;
	int	*tmp;
	int	idx;

	i = 0;
	j = 1;
	tmp = (int *)ft_calloc(stack_size, sizeof(int));
	ft_memcpy(tmp, (*stack), sizeof(int) * stack_size);
	bubble_sort(&tmp, stack_size);
	while (i < stack_size)
	{
		idx = find_number_index(*stack, stack_size, tmp[i]);
		(*stack)[idx] = j;
		j++;
		i++;
	}
}
