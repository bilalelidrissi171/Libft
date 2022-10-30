/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:44:59 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/30 11:55:06 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*x;

	if (!dst && !src)
		return (NULL);
	x = (char *)src;
	i = 0;
	while (i < n)
	{
		ft_memset(dst + i, x[i], 1);
		i++;
	}
	return (dst);
}


// int main()
// {
// 	int i = 0;
// 	int a[10] = {0,1,3,4,5,6,7,8,9};
// 	ft_memcpy(a+3,a,4);

// 	while (i < 10)
// 	{
// 		printf("%d\n",a[i++]);
// 	}

// }
