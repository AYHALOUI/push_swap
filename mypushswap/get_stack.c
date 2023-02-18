#include "push_swap.h"
#include "create_stack.c"

t_stack *get_stack(int ac, char **av)
{
    int size;

    if (ac < 1)
        exit(0);
    size = ac - 1;    
    t_stack *stack = create_stack(size);
}

