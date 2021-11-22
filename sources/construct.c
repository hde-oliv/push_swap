/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   construct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:07:52 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/11/22 11:07:53 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	bubble_sort(int **array, int size);
static void	simplify_array(int **array, int size);
static int	find_number_index(int *stack, int stack_size, int number);

void	construct(t_ps *push, char **args, int size)
{
	int	i;
	int	*array;

	i = 0;
	push->a = NULL;
	push->b = NULL;
	push->size = size;
	array = (int *)malloc(sizeof(int) * size);
	if (!array)
		exit_with_error();
	while (i < size)
	{
		array[i] = ft_atoi(args[i]);
		i++;
	}
	simplify_array(&array, size);
	i = 0;
	while (i < size)
		stack_add_back(&(push->a), stack_new(array[i++]));
	free(array);
}

static void	simplify_array(int **array, int size)
{
	int	i;
	int	*new;
	int	*tmp;

	i = 0;
	new = (int *)malloc(sizeof(int) * size);
	if (!new)
		exit_with_error();
	while (i < size)
	{
		new[i] = (*array)[i];
		i++;
	}
	i = 0;
	tmp = (int *)malloc(sizeof(int) * size);
	if (!tmp)
		exit_with_error();
	while (i < size)
	{
		tmp[i] = (*array)[i];
		i++;
	}
	bubble_sort(&new, size);
	i = 0;
	while (i < size)
	{
		(*array)[find_number_index(tmp, size, new[i])] = i;
		i++;
	}
	free(new);
	free(tmp);
}

static int	find_number_index(int *array, int size, int number)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (array[i] == number)
			return (i);
		i++;
	}
	return (i);
}

static void	bubble_sort(int **array, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 1;
	while (i < size)
	{
		j = 0;
		while (j < size - i)
		{
			if ((*array)[j] > (*array)[j + 1])
			{
				tmp = (*array)[j];
				(*array)[j] = (*array)[j + 1];
				(*array)[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
