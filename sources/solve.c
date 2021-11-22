#include "push_swap.h"

static void	radix_sort(t_ps *push);
static void	three_sort(t_ps *push);

void	solve(t_ps *push)
{
	if (push->size <= 3)
		three_sort(push);
	else if (push->size <= 10)
	{
		// TODO: a good sort for small numbers
	}
	else
		radix_sort(push);
}

static void	three_sort(t_ps *push)
{
	// TODO
}

static void	radix_sort(t_ps *push)
{
	int	i;
	int	j;

	j = 0;
	// TODO: is_sorted "while (!is_sorted(push))"
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
		while (push->b != NULL)
			pa(push);
		j++;
	}
}
