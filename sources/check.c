/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:07:43 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/11/22 11:07:45 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static int	is_number(char *number);
static void	check_invalid_arguments(char **args, int size);
static void	check_duplicates(char **args, int size);
static void	check_int_extremes(char **args, int size);

void	check(char **args, int size)
{
	if (size == 0)
		exit_with_error();
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
	int			i;
	long long	j;

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
		i++;
	}
}

static void	check_duplicates(char **args, int size)
{
	int	i;
	int	j;
	int	*tmp;

	i = -1;
	tmp = (int *) ft_calloc(size, sizeof(int));
	if (!tmp)
		exit_with_error();
	while (++i < size)
		tmp[i] = ft_atoi(args[i]);
	i = -1;
	while (++i < size)
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
