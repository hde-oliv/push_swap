/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 22:25:20 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/11/03 22:25:21 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"

/* Defines */
#define MISSING_ARGS "Missing arguments."
#define INVALID_ARGS "Invalid arguments."
#define INSUFFICIENT_MEMORY "Insufficient memory."

/* Instructions */
void	sa(int **a);
void	rra(int **a, int a_size);
void	rrb(int **b, int b_size);
void	rrr(int **a, int **b, int a_size, int b_size);

/* Utils */
void	shift_one_right(int **stack, int stack_size);
void	err(char *error);
#endif
