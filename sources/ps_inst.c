/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 22:25:25 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/11/03 22:25:26 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	sa(int **a)
{
	int	tmp;

	tmp = (*a)[1];
	(*a)[1] = (*a)[0];
	(*a)[0] = tmp;
	write(1, "sa\n", 3);
}

void	sb(int ***b)
{
	int	*tmp;

	if (!(*b)[1])
	{
		tmp = (*b)[1];
		(*b)[1] = (*b)[0];
		(*b)[0] = (*b)[1];
	}
	write(1, "sb\n", 3);
}

void	ss(int ***a, int ***b)
{
	int	*tmp;

	if (!(*a)[1])
	{
		tmp = (*a)[1];
		(*a)[1] = (*a)[0];
		(*a)[0] = (*a)[1];
	}
	if (!(*b)[1])
	{
		tmp = (*b)[1];
		(*b)[1] = (*b)[0];
		(*b)[0] = (*b)[1];
	}
	write(1, "ss\n", 3);
}

void	pa(int ***a, int ***b)
{
	(void)a;
	(void)b;
}

void	pb(int ***a, int ***b)
{
	(void)a;
	(void)b;
}
