#include "push_swap.h"


static int	is_white_space(char c)
{
	if ((c >= '\t' && c <= '\r' ) || c == ' ' )
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	sum;
	int	sign;
	int	found;

	sum = 0;
	sign = 1;
	found = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && found)
	{
		if (*str >= '0' && *str <= '9')
			sum = sum * 10 + *str - '0';
		else
			found = 0;
		str++;
	}
	return (sign * sum);
}

// int main()
// {
//     printf("%d\n", ft_atoi("-1234"));
// }