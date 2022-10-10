/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:56:42 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/10 14:56:41 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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
// 		if(ft_isalpha(c[x]) != isalpha(c[x]))
// 			printf("Chr : %c | Dec : %d | ft_isalpha : %d | isalpha : %d \n",
// 			(char)c[x],c[x],ft_isalpha(c[x]),isalpha(c[x]));
// 		x++;
// 	}
// 	return(0);
// }
