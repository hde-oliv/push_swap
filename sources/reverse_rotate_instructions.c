#include "libft.h"
#include "push_swap.h"

void	rra(t_list **a)
{
	t_list	*i;
	t_list	*j;

	i = *a;
	while (i->next->next != NULL)
		i = i->next;
	j = i->next;
	i->next = NULL;
	ft_lstadd_front(a, j);
}

void	rrb(t_list **b)
{
	t_list	*i;
	t_list	*j;

	i = *b;
	while (i->next->next != NULL)
		i = i->next;
	j = i->next;
	i->next = NULL;
	ft_lstadd_front(b, j);
}

void	rrr(t_list **a, t_list **b)
{
	rra(a);
	rrb(b);
}
