/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst_r.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 22:25:16 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/11/10 21:05:07 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	ra(int **a, int a_size)
{
	int	tmp;

	tmp = (*a)[0];
	shift_one_left(a, a_size);
	(*a)[a_size - 1] = tmp;
	write(1, "ra\n", 3);
}

void	rb(int **b, int b_size)
{
	int	tmp;

	tmp = (*b)[0];
	shift_one_left(b, b_size);
	(*b)[b_size - 1] = tmp;
	write(1, "rb\n", 3);
}

void	rr(int **a, int **b, int a_size, int b_size)
{
	int	tmp;

	tmp = (*a)[0];
	shift_one_left(a, a_size);
	(*a)[a_size - 1] = tmp;
	tmp = (*b)[0];
	shift_one_left(b, b_size);
	(*b)[b_size - 1] = tmp;
	write(1, "rr\n", 3);
}
