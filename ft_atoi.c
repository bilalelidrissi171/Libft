#include "libft.h"

int ft_atoi(const char *str)
{
	size_t res;
	int sign;
	int i;

	sign = 1;
	i = 0;
	res = 0;

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;

	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}

	while (ft_isdigit(str[i]))
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}

	if (res >= 9223372036854775807 && sign == 1)
		return (-1);

	if (res > 9223372036854775807 && sign == -1)
		return (0);
	return ((int)res * sign);
}



// #include <stdio.h>
// int main()
// {
// 	    char *n = "\t\v\f\r\n \f-06050";
//         int i1 = atoi(n);
//         int i2 = ft_atoi(n);
// 		printf("%d\n",i1);
// 		printf("%d\n",i2);

// 	return 0;
// }
