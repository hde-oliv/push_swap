/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:34:30 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/11/04 20:17:03 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * Do not consider the first argument, as is
 * the name of the binary.
 */
void	check_invalid_arguments(char **args, int size)
{
	int	i;

	i = 1;
	while (i < size)
	{
		if (!is_number(args[i]))
			err(INVALID_ARGS);
		i++;
	}
}

void	check_repeated_numbers(int **stack, int stack_size)
{
	int	i;
	int	k;
	int	*arr;

	i = 0;
	arr = *stack;
	while (i < stack_size)
	{
		k = i + 1;
		while (k < stack_size)
		{
			if (arr[i] == arr[k])
			{
				free(*stack);
				err(REPEATED_ARGS);
			}
			k++;
		}
		i++;
	}
}

void	xpto(char **args, int size)
{
	int	i;
	int	k;

	i = 1;
	while (i < size)
	{
		k = 1;
		while (k < size)
		{
			if (args[i] == args[k])
				err(REPEATED_ARGS);
			k++;
		}
		i++;
	}
}
