#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"

/* Defines */
#define MISSING_ARGS "Missing arguments."
#define INVALID_ARGS "Invalid arguments."
#define INSUFFICIENT_MEMORY "Insufficient memory."

/* Instructions */
void	sa(int **a);
void	rra(int **a, int a_size);

/* Utils */
void	shift_one_right(int **stack, int stack_size);
void	err(char *error);
#endif
