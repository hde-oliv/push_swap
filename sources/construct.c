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

void	construct(t_ps *push, char **args, int size)
{
	int	i;

	i = 0;
	push->a = NULL;
	push->b = NULL;
	push->size = size;
	while (i < size)
		stack_add_back(&(push->a), stack_new(ft_atoi(args[i++])));
}
