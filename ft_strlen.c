/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:30:33 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/11 13:44:42 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	x;

	x = 0;
	while (s[x])
		x++;
	return (x);
}
// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char c[120];
// 	int x = 0;
// 	while (x <= 119)
// 	{
// 		c[x] = '\0';
// 		x++;
// 	}
// 	x = 0;
// 	while (x <= 100)
// 	{
// 		if(ft_strlen(c) != strlen(c))
// 			printf("String : %s | ft_strlen : %lu | strlen : %lu \n",
// 			c,ft_strlen(c),strlen(c));
// 		x++;
// 		c[x] = 'A';
// 	}
// 	return(0);
// }


