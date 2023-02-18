#include "push_swap.h"

static int is_full(t_stack *stack)
{
    if (stack->top == stack->capacity - 1)
        return (1);
    return (0);    
}

void push(t_stack *stask, int nbr)
{
    if (is_full(stask) == 1)
        return ;
    stask->top++;    
    stask->array[stask->top] = nbr;
    //printf("element add\n");
}

void push_from_to(t_stack *from, t_stack *to)
{
    if (is_full(to))
        return ;
    to->top++;
    to->array[to->top] = from->array[from->capacity];
    from->top--;
}