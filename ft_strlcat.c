/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:48:25 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/10 16:46:12 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	y;
	size_t	z;
	//size_t	res;


	x = 0;
	y = ft_strlen(dst);
	z = y;
	if (dstsize == 0)
		return (ft_strlen(dst));
	if(dstsize < y)
		return (ft_strlen(dst) + y);
	while ((dstsize - y - x - 1) && src[x])
	{
		dst[z] = src[x];
		x++;
		z++;
	}
	dst[y] = '\0';

	return (ft_strlen(src)+ft_strlen(dst));
}
#include <stdio.h>
#include <string.h>

int main()
{
	int x = 0;

	char dst0[120] = "";
	char src0[120] = "";
	char _dst0[120] = "";
	char _src0[120] = "";

	printf("\n\n********** dst : NULL | src : NULL **********\n\n");

	while(x<=10)
	{
		printf("ft_strlcat : %lu | dstsize : %d | dst : %s | src : %s \n",
		ft_strlcat(dst0,src0,x),x,dst0,src0);
		printf("   strlcat : %lu | dstsize : %d | dst : %s | src : %s \n",
		strlcat(_dst0,_src0,x),x,_dst0,_src0);
		printf("-----------\n");
		x++;
	}

	x = 0;

	char dst1[120] = "";
	char src1[120] = "1234";
	char _dst1[120] = "";
	char _src1[120] = "1234";

	printf("\n\n********** dst : NULL | src : Bigger **********\n\n");

	while(x<=10)
	{
		printf("ft_strlcat : %lu | dstsize : %d | dst : %s | src : %s \n",
		ft_strlcat(dst1,src1,x),x,dst1,src1);
		printf("   strlcat : %lu | dstsize : %d | dst : %s | src : %s \n",
		strlcat(_dst1,_src1,x),x,_dst1,_src1);
		printf("-----------\n");
		x++;
	}

	x = 0;

	char dst2[120] = "1234";
	char src2[120] = "";
	char _dst2[120] = "1234";
	char _src2[120] = "";

	printf("\n\n********** dst : Bigger | src : NULL **********\n\n");

	while(x<=10)
	{
		printf("ft_strlcat : %lu | dstsize : %d | dst : %s | src : %s \n",
		ft_strlcat(dst2,src2,x),x,dst2,src2);
		printf("   strlcat : %lu | dstsize : %d | dst : %s | src : %s \n",
		strlcat(_dst2,_src2,x),x,_dst2,_src2);
		printf("-----------\n");
		x++;
	}

	x = 0;

	char dst3[120] = "1234";
	char src3[120] = "1234";
	char _dst3[120] = "1234";
	char _src3[120] = "1234";

	printf("\n\n********** dst : Equal | src : Equal **********\n\n");

	while(x<=10)
	{
		printf("ft_strlcat : %lu | dstsize : %d | dst : %s | src : %s \n",
		ft_strlcat(dst3,src3,x),x,dst3,src3);
		printf("   strlcat : %lu | dstsize : %d | dst : %s | src : %s \n",
		strlcat(_dst3,_src3,x),x,_dst3,_src3);
		printf("-----------\n");
		x++;
	}

	x = 0;

	char dst4[120] = "12345678";
	char src4[120] = "1234";
	char _dst4[120] = "12345678";
	char _src4[120] = "1234";

	printf("\n\n********** dst : Bigger | src : Lower **********\n\n");

	while(x<=10)
	{
		printf("ft_strlcat : %lu | dstsize : %d | dst : %s | src : %s \n",
		ft_strlcat(dst4,src4,x),x,dst4,src4);
		printf("   strlcat : %lu | dstsize : %d | dst : %s | src : %s \n",
		strlcat(_dst4,_src4,x),x,_dst4,_src4);
		printf("-----------\n");
		x++;
	}

	x = 0;

	char dst5[120] = "1234";
	char src5[120] = "12345678";
	char _dst5[120] = "1234";
	char _src5[120] = "12345678";

	printf("\n\n********** dst : Lower | src : Bigger **********\n\n");

	while(x<=10)
	{
		printf("ft_strlcat : %lu | dstsize : %d | dst : %s | src : %s \n",
		ft_strlcat(dst5,src5,x),x,dst5,src5);
		printf("   strlcat : %lu | dstsize : %d | dst : %s | src : %s \n",
		strlcat(_dst5,_src5,x),x,_dst5,_src5);
		printf("-----------\n");
		x++;
	}

	return(0);
}
