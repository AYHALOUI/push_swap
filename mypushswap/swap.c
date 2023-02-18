#include "push_swap.h"

void	swap(t_stack *stack)
{
	int	aux;

	if (stack->top <= 0)
		return ;
	aux = stack->array[stack->top];
	stack->array[stack->top] = stack->array[stack->top - 1];
	stack->array[stack->top - 1] = aux;
}