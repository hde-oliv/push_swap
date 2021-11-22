#include "libft.h"
#include "push_swap.h"

static int	is_number(char *number);
static void	check_invalid_arguments(char **args, int size);
static void	check_duplicates(char **args, int size);
static void	check_int_extremes(char **args, int size);

void	check(char **args, int size)
{
	check_invalid_arguments(args, size);
	check_int_extremes(args, size);
	check_duplicates(args, size);
}

static void	check_invalid_arguments(char **args, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (!is_number(args[i]))
			exit_with_error();
		i++;
	}
}

static void	check_int_extremes(char **args, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		if (ft_strlen(args[i]) > 11)
			exit_with_error();
		j = ft_atoll(args[i]);
		if (j > 2147483647)
			exit_with_error();
		else if (j < -2147483648)
			exit_with_error();
	}
}

static void	check_duplicates(char **args, int size)
{
	int i;
	int	j;
	int	*tmp;

	i = 0;
	tmp = (int *) ft_calloc(size, sizeof(int));
	if (!tmp)
		exit_with_error();
	while (i < size)
	{
		tmp[i] = ft_atoi(args[i]);
		i++;
	}
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tmp[i] == tmp[j])
			{
				free(tmp);
				exit_with_error();
			}
			j++;
		}
		i++;
	}
	free(tmp);
}

static int	is_number(char *number)
{
	int	size;
	int	i;

	size = ft_strlen(number);
	i = 1;
	if (number[0] != '-' && !ft_isdigit(number[0]))
		return (0);
	while (i < size)
	{
		if (!ft_isdigit(number[i]))
			return (0);
		i++;
	}
	return (1);
}
