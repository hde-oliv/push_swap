#include "libft.h"
#include "push_swap.h"

void	print_content(void *integer)
{
	write(1, integer, ft_strlen((char *)integer));
}

int	main(int argc, char **argv)
{
	t_list	*first;
	t_list	*node;
	int		i;

	node = ft_lstnew(*(argv + 1));
	first = node;
	i = 2;
	while (i != argc)
	{
		node->next = ft_lstnew(*(argv + i));
		node = node->next;
		i++;
	}
//	ft_lstiter(first, &print_content);
}
