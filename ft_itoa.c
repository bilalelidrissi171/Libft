/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 08:48:55 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/28 08:58:15 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*check_first(int n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	return (NULL);
}

char	*ft_itoa(int n)
{
	int		for_counter;
	int		counter;
	int		index;
	char	*str;

	counter = 0;
	for_counter = n;
	index = 0;
	if (n == -2147483648 || n == 0)
		return (check_first(n));
	if (n < 0)
		counter++;
	while (for_counter)
	{
		for_counter = for_counter / 10;
		counter++;
	}
	str = (char *)ft_calloc((counter + 1), sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n *= (-1);
	}
	while (--counter >= 0 && str[counter] != '-')
	{
		str[counter] = (n % 10) + 48;
		n /= 10;
	}
	return (str);
}
