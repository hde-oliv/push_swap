/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 22:25:06 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/11/03 22:25:07 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	shift_one_right(int **stack, int stack_size)
{
	ft_memmove((*stack)+ 1, *stack, stack_size - 1);
}

void	shift_one_back(int ***arr)
{
	(void)arr;
}

void	err(char *error)
{
	ft_putstr_fd("Error: ", 2);
	ft_putendl_fd(error, 2);
	exit(1);
}
