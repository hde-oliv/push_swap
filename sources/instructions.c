#include "push_swap.h"

void	sa(t_ps *push)
{
	t_stack	*tmp;

	if (stack_size(push->a) < 2)
		return ;
	tmp = push->a->next;
	push->a->next = push->a->next->next;
	tmp->next = push->a;
	push->a = tmp;
	write(1, "sa\n", 3);
}

void	pb(t_ps *push)
{
	t_stack	*tmp;

	if (stack_size(push->a) < 2)
		return ;
	tmp = push->a;
	push->a = push->a->next;
	stack_add_front(&(push->b), tmp);
	write(1, "pb\n", 3);
}

void	pa(t_ps *push)
{
	t_stack	*tmp;

	if (stack_size(push->b) < 2)
		return ;
	tmp = push->b;
	push->b = push->b->next;
	stack_add_front(&(push->b), tmp);
	write(1, "pa\n", 3);
}

void	ra(t_ps *push)
{
	t_stack	*tmp;

	tmp = push->a;
	push->a = push->a->next;
	stack_add_back(&(push->a), tmp);
	write(1, "ra\n", 3);
}

void	rra(t_ps *push)
{
	t_stack	*i;
	t_stack	*j;

	i = push->a;
	while (i->next->next != NULL)
		i = i->next;
	j = i->next;
	i->next = NULL;
	stack_add_front(&(push->a), j);
	write(1, "rra\n", 3);
}
