/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:24:41 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/27 09:44:31 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char	*ft_itoa(int n)
{
	int		for_counter;
	int		counter;
	int		index;
	char	*str;

	counter = 0;
	for_counter = n;
	index = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
		counter++;
	while (n)
	{
		for_counter = for_counter / 10;
		counter++;
	}
	printf("%d,",counter);

	str = (char *)calloc(counter + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n)
	{
		if(n < 0)
		{
			str[index] = '-';
			n *= (-1);
			index++;
		}
		str

	}




	return (0);

}

int main()
{
	printf("%s\n",ft_itoa(-1234));
}
