/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:37:51 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/10 15:01:59 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	x;

	x = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while ((dstsize - x - 1) && src[x])
	{
		dst[x] = src[x];
		x++;
	}
	dst[x] = '\0';
	return (ft_strlen(src));
}
// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	int x = 0;

// 	char dst0[120] = "";
// 	char src0[120] = "";
// 	char _dst0[120] = "";
// 	char _src0[120] = "";

// 	printf("\n\n%s %s\n\n",dst0,_dst0);

// 	printf("\n\n********** dst : NULL | src : NULL **********\n\n");

// 	while(x<=10)
// 	{
// 		printf("ft_strlcpy : %lu | dstsize : %d | dst : %s | src : %s \n",
// 		ft_strlcpy(dst0,src0,x),x,dst0,src0);
// 		printf("   strlcpy : %lu | dstsize : %d | dst : %s | src : %s \n",
// 		strlcpy(_dst0,_src0,x),x,_dst0,_src0);
// 		printf("-----------\n");
// 		x++;
// 	}

// 	x = 0;

// 	char dst1[120] = "";
// 	char src1[120] = "1234";
// 	char _dst1[120] = "";
// 	char _src1[120] = "1234";

// 	printf("\n\n********** dst : NULL | src : Bigger **********\n\n");

// 	while(x<=10)
// 	{
// 		printf("ft_strlcpy : %lu | dstsize : %d | dst : %s | src : %s \n",
// 		ft_strlcpy(dst1,src1,x),x,dst1,src1);
// 		printf("   strlcpy : %lu | dstsize : %d | dst : %s | src : %s \n",
// 		strlcpy(_dst1,_src1,x),x,_dst1,_src1);
// 		printf("-----------\n");
// 		x++;
// 	}

// 	x = 0;

// 	char dst2[120] = "1234";
// 	char src2[120] = "";
// 	char _dst2[120] = "1234";
// 	char _src2[120] = "";

// 	printf("\n\n********** dst : Bigger | src : NULL **********\n\n");

// 	while(x<=10)
// 	{
// 		printf("ft_strlcpy : %lu | dstsize : %d | dst : %s | src : %s \n",
// 		ft_strlcpy(dst2,src2,x),x,dst2,src2);
// 		printf("   strlcpy : %lu | dstsize : %d | dst : %s | src : %s \n",
// 		strlcpy(_dst2,_src2,x),x,_dst2,_src2);
// 		printf("-----------\n");
// 		x++;
// 	}

// 	x = 0;

// 	char dst3[120] = "1234";
// 	char src3[120] = "1234";
// 	char _dst3[120] = "1234";
// 	char _src3[120] = "1234";

// 	printf("\n\n********** dst : Equal | src : Equal **********\n\n");

// 	while(x<=10)
// 	{
// 		printf("ft_strlcpy : %lu | dstsize : %d | dst : %s | src : %s \n",
// 		ft_strlcpy(dst3,src3,x),x,dst3,src3);
// 		printf("   strlcpy : %lu | dstsize : %d | dst : %s | src : %s \n",
// 		strlcpy(_dst3,_src3,x),x,_dst3,_src3);
// 		printf("-----------\n");
// 		x++;
// 	}

// 	x = 0;

// 	char dst4[120] = "12345678";
// 	char src4[120] = "1234";
// 	char _dst4[120] = "12345678";
// 	char _src4[120] = "1234";

// 	printf("\n\n********** dst : Bigger | src : Lower **********\n\n");

// 	while(x<=10)
// 	{
// 		printf("ft_strlcpy : %lu | dstsize : %d | dst : %s | src : %s \n",
// 		ft_strlcpy(dst4,src4,x),x,dst4,src4);
// 		printf("   strlcpy : %lu | dstsize : %d | dst : %s | src : %s \n",
// 		strlcpy(_dst4,_src4,x),x,_dst4,_src4);
// 		printf("-----------\n");
// 		x++;
// 	}

// 	x = 0;

// 	char dst5[120] = "1234";
// 	char src5[120] = "12345678";
// 	char _dst5[120] = "1234";
// 	char _src5[120] = "12345678";

// 	printf("\n\n********** dst : Lower | src : Bigger **********\n\n");

// 	while(x<=10)
// 	{
// 		printf("ft_strlcpy : %lu | dstsize : %d | dst : %s | src : %s \n",
// 		ft_strlcpy(dst5,src5,x),x,dst5,src5);
// 		printf("   strlcpy : %lu | dstsize : %d | dst : %s | src : %s \n",
// 		strlcpy(_dst5,_src5,x),x,_dst5,_src5);
// 		printf("-----------\n");
// 		x++;
// 	}

// 	return(0);
// }
