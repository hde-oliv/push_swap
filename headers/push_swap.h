/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 22:25:20 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/11/16 21:05:32 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"

/* Error messages */
# define MISSING_ARGS "Missing arguments."
# define INVALID_ARGS "Invalid arguments."
# define INSUFFICIENT_MEMORY "Insufficient memory."
# define REPEATED_ARGS "Repeated arguments."

/* Instructions */
void	sa(int **a, int a_size);
void	sb(int **b, int b_size);
void	ss(int **a, int **b, int a_size, int b_size);
void	pa(int **a, int **b, int *a_size, int *b_size);
void	pb(int **a, int **b, int *a_size, int *b_size);
void	rra(int **a, int a_size);
void	rrb(int **b, int b_size);
void	rrr(int **a, int **b, int a_size, int b_size);
void	ra(int **a, int a_size);
void	rb(int **b, int b_size);
void	rr(int **a, int **b, int a_size, int b_size);

/* Algorithms */
void	select_algorithm(int *a, int *b, int a_size, int b_size);
void	quick_sort(int *a, int *b, int a_size, int b_size);
void	three_sort(int *a, int a_size);
void	insertion_sort(int *a, int *b, int a_size, int b_size);
void	radix_sort(int *a, int *b, int a_size, int b_size);

/* Constructors */
int		*create_stack_a(char **args, int size);
int		*create_stack_b(int size);

/* Checkers */
void	check_invalid_arguments(char **args, int size);
void	check_repeated_numbers(int **stack, int stack_size);

/* Methods */
int		is_number(char *number);
int		is_sorted(int *stack, int stack_size);

/* Utils */
void	shift_one_right(int **stack, int stack_size);
void	shift_one_left(int **stack, int stack_size);
void	err(void);
void	print_stack(int *stack, int stack_size);
void	simplify_array(int **stack, int stack_size);
int		find_number_index(int *stack, int stack_size, int number);
int		find_lowest_number(int *stack, int stack_size);

#endif
