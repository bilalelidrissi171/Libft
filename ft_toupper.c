/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:36:54 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/10 14:58:37 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
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
// 		if(ft_toupper(c[x]) != toupper(c[x]))
// 			printf("Chr : %c | Dec : %d | ft_toupper : %c | toupper : %c \n",
// 			(char)c[x],c[x],(char)ft_toupper(c[x]),(char)toupper(c[x]));
// 		x++;
// 	}
// 	return(0);
// }
