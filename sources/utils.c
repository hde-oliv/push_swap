/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 22:25:06 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/11/16 20:50:13 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	shift_one_right(int **stack, int stack_size)
{
	int	i;

	i = 1;
	while (i < stack_size)
	{
		(*stack)[stack_size - i] = (*stack)[stack_size - i - 1];
		i++;
	}
}

void	shift_one_left(int **stack, int stack_size)
{
	int	i;

	i = 0;
	while (i < stack_size - 1)
	{
		(*stack)[i] = (*stack)[i + 1];
		i++;
	}	
}

void	err(char *error)
{
	ft_putstr_fd("Error: ", 2);
	ft_putendl_fd(error, 2);
	exit(1);
}

void	print_stack(int *stack, int stack_size)
{
	int	i;

	i = 0;
	while (i < stack_size)
	{
		ft_putnbr_fd(stack[i], 1);
		ft_putstr_fd(" ", 1);
		i++;
	}
	ft_putendl_fd("", 1);
}
