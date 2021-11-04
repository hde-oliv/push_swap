/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_inst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 22:25:11 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/11/03 22:36:35 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	rra(int **a, int a_size)
{
	int	tmp;

	tmp = (*a)[a_size - 1];
	shift_one_right(a, a_size);
	(*a)[0] = tmp;
	write(1, "rra\n", 4);
}

void	rrb(int **b, int b_size)
{
	int	tmp;

	tmp = (*b)[b_size - 1];
	shift_one_right(b, b_size);
	(*b)[0] = tmp;
	write(1, "rrb\n", 4);
}

void	rrr(int **a, int **b, int a_size, int b_size)
{
	int	tmp;

	tmp = (*a)[a_size - 1];
	shift_one_right(a, a_size);
	(*a)[0] = tmp;
	tmp = (*b)[b_size - 1];
	shift_one_right(b, b_size);
	(*b)[0] = tmp;
	write(1, "rrr\n", 4);
}
