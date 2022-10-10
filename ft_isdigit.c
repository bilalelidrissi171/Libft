/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:09:22 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/10 14:57:31 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
// 	int c[260];
// 	int x = 0;
// 	while (x <= 255)
// 	{
// 		c[x] = x;
// 		if(ft_isdigit(c[x]) != isdigit(c[x]))
// 			printf("Chr : %c | Dec : %d | ft_isdigit : %d | isdigit : %d \n",
// 			(char)c[x],c[x],ft_isdigit(c[x]),isdigit(c[x]));
// 		x++;
// 	}
// 	return(0);
// }
