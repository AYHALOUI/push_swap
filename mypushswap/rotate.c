#include "push_swap.h"

void	rotate(t_stack *stack)
{
	unsigned int	i;
	int				tmp;

	i = stack->top + 1;
	tmp = stack->array[stack->top];
	while (--i)
		stack->array[i] = stack->array[i - 1];
	stack->array[0] = tmp;
}