/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:48:25 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/09 21:08:30 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = ft_strlen(dst);
	if (dstsize == 0)
		return (ft_strlen(src));
	while ((dstsize - y - x - 1) && src[x])
	{
		dst[y] = src[x];
		x++;
		y++;
	}
	dst[y] = '\0';

	return (ft_strlen(src)+ft_strlen(dst));
}


#include<stdio.h>
#include<string.h>

int main()
{
	char des[50] ;
	char src[50] = "12345666";
	printf("%lu\n",strlcat(des,src,0));
	printf("des = %s\n",des);

	char des1[50] = "12345";
	char src1[50] = "12345666";
	printf("%lu\n",ft_strlcat(des1,src1,3));
	printf("des = %s",des1);



}
