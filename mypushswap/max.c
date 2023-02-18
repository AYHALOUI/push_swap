#include "push_swap.h"

int max_help(int *tab, int len)
{
    int result;
    int i;

    i = 0;
    result = tab[i];
    while (i < len)
    {
        if (result < tab[i])
            result = tab[i];
        i++;    
    }
    return (result);
}

int find_max(t_stack *stack)
{
    int min;
    min = max_help(stack->array, stack->capacity);
}