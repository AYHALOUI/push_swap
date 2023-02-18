#include "push_swap.h"


int *parse_args(int ac, char **av)
{
    int *tab;
    int len;

    if (ac < 2)
    {
        fprintf(stderr, "Usage: %s <n1> <n2> ... <nk>\n", av[0]);
        exit(EXIT_FAILURE);
    }
    else
    {
        len = ac - 1;
        tab = malloc(sizeof(int) * len);
        if (!tab)
            return (NULL);
        int i = 0;
        // while (i <= len)
        // {
        //     tab[i] = atoi(av[i + 1]);
        //     i++;
        // }    
        while (av[i])
        {

        }
    }
    return (tab);
}
