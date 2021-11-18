/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 20:12:45 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/11/16 21:02:08 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_nearest_number(int *stack, int stack_size, int number)
{
	int	i;

	i = 0;
	while (i < stack_size)
	{
		if (stack[i] <= number)
			return (i);
		i++;
	}
	return (i);
}

int	find_lowest_number(int *stack, int stack_size)
{
	int	i;
	int	lowest;
	int	lowest_index;

	i = 0;
	lowest = stack[0];
	lowest_index = i;
	while (i < stack_size)
	{
		if (stack[i] < lowest)
		{
			lowest = stack[i];
			lowest_index = i;
		}
		i++;
	}
	return (lowest_index);
}

int	find_biggest_number(int *stack, int stack_size)
{
	int	i;
	int	biggest;
	int	biggest_index;

	i = 0;
	biggest = stack[0];
	biggest_index = i;
	while (i < stack_size)
	{
		if (stack[i] > biggest)
		{
			biggest = stack[i];
			biggest_index = i;
		}
		i++;
	}
	return (biggest_index);
}
