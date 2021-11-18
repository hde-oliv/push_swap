/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 22:25:23 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/11/16 21:05:51 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	*stack_a;
	int	stack_a_size;
	int	*stack_b;
	int	stack_b_size;

	if (argc < 2)
		err(MISSING_ARGS);
	check_invalid_arguments(argv, argc);
	stack_a_size = argc - 1;
	stack_a = create_stack_a(&(argv[1]), stack_a_size);
	check_repeated_numbers(&stack_a, stack_a_size);
	stack_b = create_stack_b(stack_a_size);
	stack_b_size = 0;
	if (is_sorted(stack_a, stack_a_size))
		exit(0);
	select_algorithm(stack_a, stack_b, stack_a_size, stack_b_size);
	free(stack_a);
	free(stack_b);
}
