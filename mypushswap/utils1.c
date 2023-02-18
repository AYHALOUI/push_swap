#include "push_swap.h"


void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
int ft_isdigit(char c)
{
    return (c >= 0 && c <= 9);   
}

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);    
}

int check_string(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (ft_isalpha(str[i]))
            return (1);
        i++;
    }
    return (0);    
}

int check_if_duplicate(int *tab, int len)
{
	int i = 0;
	int j = 0;
	while (i < len) 
	{    
		j = i + 1;
        while (j < len) 
		{    
            if(tab[i] == tab[j])    
                return (1);
				j++;		    
        }
		i++;
    }
	return (0);
}

char	*ft_strjoin(char *s1, char 	*s2)
{
	char		*str;
	size_t		len;
	int			i;
	int			j;

	str = NULL;
	if (!s1 || !s2)
		return (str);
	else
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		str = (char *)malloc(sizeof(char) * (len + 1));
		if (str != NULL)
		{
			i = -1;
			while (s1[++i])
				str[i] = s1[i];
			j = -1;
			while (s2[++j])
				str[i++] = s2[j];
			str[i] = '\0';
		}
	}
	return (str);
}