/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:17:01 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/10 14:57:16 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
// 		if(ft_isascii(c[x]) != isascii(c[x]))
// 			printf("Chr : %c | Dec : %d | ft_isascii : %d | isascii : %d \n",
// 			(char)c[x],c[x],ft_isascii(c[x]),isascii(c[x]));
// 		x++;
// 	}
// 	return(0);
// }
