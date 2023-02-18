#include "push_swap.h"
#include "create_stack.c"
#include "parse_args.c"
#include "push.c"
#include "max.c"
#include "utils.c"
#include "utils1.c"
#include "utils2.c"

void quit()
{
    ft_putstr("error");
    exit(0);
}

void print_info(int *tab, int len)
{
    for (size_t i = 0; i < len; i++)
    {
        printf("%d\n", tab[i]);
    }
}

void print(t_stack *stack)
{
    print_info(stack->array, stack->capacity);
}

int main(int ac, char **av)
{
    int *tab;
    int len = ac - 1;
    t_stack *stack_a, *stack_b;
    // int *tab = parse_args(len, av);
    stack_a = create_stack(len);
    stack_b = create_stack(len);

    char **split;
    int i = 1;
    char *str = "";
    char *space = " ";
    while (av[i])
    {
        str = ft_strjoin(str, av[i]);
        str = ft_strjoin(str, " ");
        i++;
    }
    //printf("%s\n", str);
    if (check_string(str) == 1)
        quit();
    else
    {
        split = ft_split(str, ' ');
        int j = 0;
        while (split[j])
        {
            push(stack_a, ft_atoi(split[j]));
            j++;
        }
        // print_info(stack_a->array, stack_a->capacity);
        if (check_if_duplicate(stack_a->array, stack_a->capacity))
            quit();
        print(stack_a);
    }    
}