/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst_ps.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 22:25:25 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/11/10 20:31:49 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	sa(int **a, int a_size)
{
	int	tmp;

	if (a_size > 1)
	{
		tmp = (*a)[1];
		(*a)[1] = (*a)[0];
		(*a)[0] = tmp;
		write(1, "sa\n", 3);
	}
}

void	sb(int **b, int b_size)
{
	int	tmp;

	if (b_size > 1)
	{
		tmp = (*b)[1];
		(*b)[1] = (*b)[0];
		(*b)[0] = tmp;
		write(1, "sb\n", 3);
	}
}

void	ss(int **a, int **b, int a_size, int b_size)
{
	int	tmp;

	if (a_size > 1)
	{
		tmp = (*a)[1];
		(*a)[1] = (*a)[0];
		(*a)[0] = tmp;
	}
	if (b_size > 1)
	{
		tmp = (*b)[1];
		(*b)[1] = (*b)[0];
		(*b)[0] = tmp;
	}
	write(1, "ss\n", 3);
}

void	pa(int **a, int **b, int *a_size, int *b_size)
{
	if (!b_size)
		return ;
	shift_one_right(a, *a_size);
	(*a)[0] = (*b)[0];
	shift_one_left(b, *b_size);
	(*b_size) -= 1;
	(*a_size) += 1;
	write(1, "pa\n", 3);
}

void	pb(int **a, int **b, int *a_size, int *b_size)
{
	if (!a_size)
		return ;
	shift_one_right(b, *b_size);
	(*b)[0] = (*a)[0];
	shift_one_left(a, *a_size);
	(*a_size) -= 1;
	(*b_size) += 1;
	write(1, "pb\n", 3);
}
