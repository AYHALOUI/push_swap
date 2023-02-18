#include "push_swap.h"


t_stack *create_stack(unsigned capacity)
{
    t_stack *stack;
    stack = malloc(sizeof(t_stack));
    if (!stack)
        return (0);
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = malloc(sizeof(int) * stack->capacity);
    if (!stack->array)
        return (0);
    return (stack);
}