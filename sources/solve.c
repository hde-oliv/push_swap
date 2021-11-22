#include "push_swap.h"

static void	radix_sort(t_ps *push);
static void	three_sort(t_ps *push);
static void mini_sort(t_ps *push);

void	solve(t_ps *push)
{
	if (is_sorted(push->a))
		return ;
	if (push->size < 4)
		three_sort(push);
	else if (push->size < 7)
		mini_sort(push);
	else
		radix_sort(push);
}

static void	three_sort(t_ps *push)
{
	int	first;
	int	second;
	int	third;

	first = push->a->i;
	second = push->a->next->i;
	third = push->a->next->next->i;
	if (first < second && second < third)
		return ;
	else if (first < second && second > third)
	{
		rra(push);
		sa(push);
	}
	else if (first > second && second > third)
	{
		sa(push);
		rra(push);
	}
	else if (first > second && second < third && first < third)
		sa(push);
	else if (first > second && second < third && first > third)
	{
		rra(push);
		rra(push);
	}
	else
		rra(push);
}

static void mini_sort(t_ps *push)
{
	int	j;

	j = 0;
	while (stack_size(push->a) >= 4)
	{
		j = find_smallest_number(push->a);
		if (j == 0)
			pb(push);
		else if (j <= (push->size / 2))
			ra(push);
		else if (j > (push->size / 2))
			rra(push);
	}
	three_sort(push);
	while (stack_size(push->b) != 0)
		pa(push);
}

static void	radix_sort(t_ps *push)
{
	int	i;
	int	j;

	j = 0;
	while (!is_sorted(push->a))
	{
		i = 0;
		while (i < push->size)
		{
			if ((((push->a->i) >> j) & 1) == 0)
				pb(push);
			else
				ra(push);
			i++;
		}
		while (stack_size(push->b) != 0)
			pa(push);
		j++;
	}
}
