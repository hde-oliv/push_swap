#include "libft.h"
#include "push_swap.h"

void	print_content(void *str)
{
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
}

t_list	*create_stack_a(int list_size, void **list, char mode)
{
	t_list	*first;
	t_list	*node;
	int		i;

	if (mode == 'v')
	{
		node = ft_lstnew(*(list + 1));
		i = 2;
	}
	else
	{
		node = ft_lstnew(*list);
		i = 1;
	}
	first = node;
	while (i != list_size)
	{
		node->next = ft_lstnew(*(list + i));
		node = node->next;
		i++;
	}
	return (first);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	char	**list;
	int		i;

	i = 0;
	if (argc > 2)
		stack_a = create_stack_a(argc, (void *)argv, 'v');
	else if (argc == 2)
	{
		list = ft_split(*(argv + 1), ' ');
		while (list[i++])
			;
		stack_a = create_stack_a(i - 1, (void *)list, 's');
	}
	else
		exit(1);
}
