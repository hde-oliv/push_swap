#include "push_swap.h"

int	main(int argc, char *argv[])
{
	char	**args;
	t_ps	push;

	args = &argv[1];
	check(args, argc - 1);
	construct(&push, args, argc - 1);
	solve(&push);
	clear(&push);
}
