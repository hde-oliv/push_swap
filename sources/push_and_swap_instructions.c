#include "libft.h"
#include "push_swap.h"

void	sa(t_list **a)
{
	t_list	*tmp;

	if (ft_lstsize(*a) > 1)
	{
		// a -> b -> c
		tmp = (*a); // a
		tmp->next = tmp->next->next; // pointing next to c
		*a = (*a)->next; // list starts on b
		(*a)->next = tmp; // b points to a that points to c now
	}
}

void	sb(t_list **b)
{
	t_list	*tmp;

	if (ft_lstsize(*b) > 1)
	{
		// a -> b -> c
		tmp = (*b); // a
		tmp->next = tmp->next->next; // pointing next to c
		*b = (*b)->next; // list starts on b
		(*b)->next = tmp; // b points to a that points to c now
	}
}

void	ss(t_list **a, t_list **b)
{
	sa(a);
	sb(b);
}

void	pa(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (ft_lstsize(*b) > 0)
	{
		tmp = (*b);
		*b = (*b)->next;
		ft_lstadd_front(a, tmp);
	}
}

void	pb(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (ft_lstsize(*a) > 0)
	{
		tmp = (*a);
		*a = (*a)->next;
		ft_lstadd_front(b, tmp);
	}
}
