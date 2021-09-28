#include "push_swap.h"

void	shift_one_forward(int ***arr)
{
	int **new;
	int i;

	i = 0;
	while ((*arr)[i++])
		;
	new = (int **) malloc(sizeof(int *) * (i + 1));
	i = 0;
	while ((*arr)[i])
	{
		new[i + 1] = (*arr)[i];
		i++;
	}
	// TODO set the null on new
	free(**arr);
	arr = &new;
}

void	shift_one_back(int ***arr)
{
	int **new;
	int i;

	i = 0;
	while ((*arr)[i++])
		;
	new = (int **) malloc(sizeof(int *) * (i + 1));
	i = 0;
	while ((*arr)[i])
	{
		new[i] = (*arr)[i + 1];
		i++;
	}
	free(**arr);
	arr = &new;
}
