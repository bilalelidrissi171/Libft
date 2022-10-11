/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:49:11 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/11 20:13:37 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;

	a = b;
	while (len)
	{
		*a = (unsigned char)c;
		len--;
		a++;
	}
	return (b);
}

// #include <stdio.h>
// #include <string.h>

// int main(){

// 	char *k = "bilalelidrissi";
// 	char *a = ft_memset(k, '3' , 4*sizeof(char));
// 	printf("%s",a);

// 	return(0);
// }
