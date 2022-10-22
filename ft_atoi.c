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

	if (*str == '+' || *str == '-')
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
	// if (((res * 10) + (str[i] - 48)) > 18446744073709551614)
	// 	break;

	return ((int)res * sign);
}


