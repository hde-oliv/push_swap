#include "push_swap.h"

static void	stack_clear(t_stack **stack);

void	clear(t_ps *push)
{
	stack_clear(&(push->a));
	stack_clear(&(push->b));
}

static void	stack_clear(t_stack **stack)
{
	if (*stack)
	{
		stack_clear(&(*stack)->next);
		free(*stack);
		*stack = NULL;
	}
}

void	exit_with_error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}
