#include "push_swap.h"

void	construct(t_ps *push, char **args, int size)
{
	int	i;

	i = 0;
	push->a = NULL;
	push->b = NULL;
	push->size = size;
	while (i < size)
		stack_add_back(&(push->a), stack_new(ft_atoi(args[i])));
}
