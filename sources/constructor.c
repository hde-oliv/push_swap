/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:35:39 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/11/04 19:36:02 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*create_stack_a(char **args, int size)
{
	int	*stack;
	int	i;

	i = 0;
	stack = (int *)ft_calloc(size, sizeof(int));
	if (stack == NULL)
		err();
	while (i < size)
	{
		stack[i] = ft_atoi(args[i]);
		i++;
	}
	return (stack);
}

int	*create_stack_b(int size)
{
	int	*stack;

	stack = (int *)ft_calloc(size, sizeof(int));
	if (stack == NULL)
		err();
	return (stack);
}
