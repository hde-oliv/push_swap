/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:45:34 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/11/17 10:12:12y hde-oliv         ###   ########.fr       */
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
		// TODO
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
			break;
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
	}
	else
		ra(&a, a_size);
}

void	radix_sort(int *a, int *b, int a_size, int b_size)
{}
