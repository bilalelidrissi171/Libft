/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:23:40 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/10 14:57:46 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
// 		if(ft_isprint(c[x]) != isprint(c[x]))
// 			printf("Chr : %c | Dec : %d | ft_isprint : %d | isprint : %d \n",
// 			(char)c[x],c[x],ft_isprint(c[x]),isprint(c[x]));
// 		x++;
// 	}
// 	return(0);
// }
