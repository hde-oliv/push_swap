#include "push_swap.h"

void	sa(t_ps *push)
{
	t_stack	*tmp;

	if (!stack_size(push->a))
		return ;
	tmp = push->a->next;
	push->a->next = push->a->next->next;
	tmp->next = push->a;
	push->a = tmp;
	// TODO: write
}

void	pb(t_ps *push)
{
	t_stack	*tmp;

	if (!stack_size(push->a))
		return ;
	tmp = push->a;
	push->a = push->a->next;
	stack_add_front(&(push->b), tmp);
	// TODO: write
}

void	pa(t_ps *push)
{
	t_stack	*tmp;

	if (!stack_size(push->b))
		return ;
	tmp = push->b;
	push->b = push->b->next;
	stack_add_front(&(push->b), tmp);
	// TODO: write
}

void	ra(t_ps *push)
{
	t_stack	*tmp;

	tmp = push->a;
	push->a = push->a->next;
	stack_add_back(&(push->a), tmp);
	// TODO: write
}

void	rra(t_ps *push)
{
	// TODO
}
