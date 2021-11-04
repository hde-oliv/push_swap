/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 22:25:23 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/11/03 22:25:24 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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


void	stack_sort_3(int *stack, int stack_size)
{
	if (stack_size == 1)
		return ;
	if (stack_size == 2)
	{
		sa(&stack);
		return ;
	}
	if (stack[1] > stack[0])
	{
		rra(&stack, stack_size);
		sa(&stack);
	}
	else
	{
		sa(&stack);
		rra(&stack, stack_size);
		sa(&stack);
	}
}

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

int	*create_stack_a(char **args, int size)
{
	int	*stack;
	int	i;

	i = 0;
	stack = (int *)ft_calloc(size, sizeof(int));
	if (stack == NULL)
		err(INSUFFICIENT_MEMORY);
	while (i < size)
	{
		stack[i] = ft_atoi(args[i]);
		i++;
	}
	return (stack);
}

void	print_stack(int *stack, int stack_size)
{
	int	i = 0;

	while (i < stack_size)
	{
		ft_putnbr_fd(stack[i], 1);
		ft_putendl_fd("", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	*stack_a;
	int	stack_a_size;

	if (argc < 2)
		err(MISSING_ARGS);
	check_invalid_arguments(argv, argc);
	stack_a_size = argc - 1;
	stack_a = create_stack_a(&(argv[1]), stack_a_size);
	if (is_sorted(stack_a, stack_a_size))
		exit(0);
	if (stack_a_size <= 3)
		stack_sort_3(stack_a, stack_a_size);
	free(stack_a);
}
