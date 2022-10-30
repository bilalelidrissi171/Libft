/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:49:11 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/30 11:28:11 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;

	a = (unsigned char *)b;
	while (len)
	{
		*a++ = (unsigned char)c;
		len--;
	}
	return (b);
}
// void	*ft_char_memset(void *b, int c, size_t len)
// {
// 	char	*a;

// 	a = ( char *)b;
// 	while (len)
// 	{
// 		*a++ = ( char)c;
// 		len--;
// 	}
// 	return (b);
// }


// int main()
// {
//  int b = 5;  // 0 0 0 5
// int b1 = 5;  // 0 0 0 5

//  int c =1000;  // 0 0 5 5
//  size_t len = 2;

//  printf("|%d|\n", *((int *)ft_memset(&b,c,len)));
//  printf("|%d|",*((int *)ft_char_memset(&b1,c,len)));
// }
