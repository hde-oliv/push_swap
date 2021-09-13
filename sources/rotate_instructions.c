#include "push_swap.h"
#include "libft.h"

void	ra(t_list **a)
{
	t_list	*tmp;

	tmp = (*a);
	*a = (*a)->next;
	ft_lstadd_back(a, tmp);
}

void	rb(t_list **b)
{
	t_list	*tmp;

	tmp = (*b);
	*b = (*b)->next;
	ft_lstadd_back(b, tmp);
}

void	rr(t_list **a, t_list **b)
{
	ra(a);
	rb(b);
}
