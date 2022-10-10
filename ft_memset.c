/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:49:11 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/10 18:21:16 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	x;
	char	*a;

	a = b;
	x = 0;
	while (len)
	{
		*a = (unsigned char)c;
		len--;
		a++;
	}
	// a = "aa";
	// (void)len;
	// (void)c;
	return (a);
}

#include <stdio.h>
#include <string.h>

int main(){

	char *k = "bilalelidrissi";
	char *a = ft_memset(k, '3' , 4*sizeof(char));
	printf("%s",a);

	return(0);
}
