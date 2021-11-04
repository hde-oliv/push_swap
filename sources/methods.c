/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   methods.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:44:07 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/11/04 19:44:32 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_number(char *number)
{
	int	size;
	int	i;

	size = ft_strlen(number);
	i = 1;
	if (number[0] != '-' && !ft_isdigit(number[0]))
		return (0);
	while (i < size)
	{
		if (!ft_isdigit(number[i]))
			return (0);
		i++;
	}
	return (1);
}

int	is_sorted(int *stack, int stack_size)
{
	int	i;

	i = stack_size - 1;
	while (i != 0)
	{
		if (stack[i] < stack[i - 1])
			return (0);
		i--;
	}
	return (1);
}
