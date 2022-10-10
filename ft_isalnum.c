/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:12:59 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/10 14:56:18 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c) || ft_isdigit(c)))
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
// 		if(ft_isalnum(c[x]) != isalnum(c[x]))
// 			printf("Chr : %c | Dec : %d | ft_isalnum : %d | isalnum : %d \n",
// 			(char)c[x],c[x],ft_isalnum(c[x]),isalnum(c[x]));
// 		x++;
// 	}
// 	return(0);
// }
