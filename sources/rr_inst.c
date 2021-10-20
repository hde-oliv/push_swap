#include "libft.h"
#include "push_swap.h"

void	rra(int **a, int a_size)
{
	int	tmp;

	tmp = (*a)[a_size - 1];
	shift_one_right(a, a_size);
	(*a)[0] = tmp;
	write(1, "rra\n", 4);
}

void	rrb(int ***b)
{
	(void)b;
}

void	rrr(int ***a, int ***b)
{
	(void)a;
	(void)b;
}
