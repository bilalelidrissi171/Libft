/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:39:59 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/10 14:58:26 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
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
// 		if(ft_tolower(c[x]) != tolower(c[x]))
// 			printf("Chr : %c | Dec : %d | ft_tolower : %c | tolower : %c \n",
// 			(char)c[x],c[x],(char)ft_tolower(c[x]),(char)tolower(c[x]));
// 		x++;
// 	}
// 	return(0);
// }
