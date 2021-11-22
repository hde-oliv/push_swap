/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:45:34 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/11/17 10:12:12 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	select_algorithm(int *a, int *b, int a_size, int b_size)
{
	if (a_size == 2)
		sa(&a, a_size);
	else if (a_size == 3)
		three_sort(a, a_size);
	else if (a_size < 7)
		insertion_sort(a, b, a_size, b_size);
	else
		radix_sort(a, b, a_size, b_size);
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

void	insertion_sort(int *a, int *b, int a_size, int b_size)
{
	int	lowest_index;

	while (!is_sorted(a, a_size))
	{
		lowest_index = find_lowest_number(a, a_size);
		if (a_size == 3)
		{
			three_sort(a, a_size);
			break ;
		}
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

void	three_sort(int *a, int a_size)
{
	if (a[1] > a[0] && a[2] < a[1])
	{
		rra(&a, a_size);
		sa(&a, a_size);
	}
	else if (a[0] > a[1] && a[2] > a[0])
		sa(&a, a_size);
	else if (a[0] < a[1] && a[0] > a[2])
		rra(&a, a_size);
	else if (a[0] > a[1] && a[1] > a[2])
	{
		rra(&a, a_size);
		rra(&a, a_size);
		sa(&a, a_size);
	}
	else
		ra(&a, a_size);
}

// TODO: Simplify the array before sorting
void	radix_sort(int *a, int *b, int a_size, int b_size)
{
	int	i;
	int	j;
	int	size;

	j = 0;
	size = a_size;
	while (!is_sorted(a, a_size))
	{
		i = 0;
		while (i < size)
		{
			if ((((*a) >> j) & 1) == 0)
				pb(&a, &b, &a_size, &b_size);
			else
				ra(&a, a_size);
			i++;
		}
		while (b_size != 0)
			pa(&a, &b, &a_size, &b_size);
		j++;
	}
}
