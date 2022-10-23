#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *a;
	unsigned char *b;
	size_t i;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i=0;
	if (n == 0)
		return(0);
	while(i < n)
	{
		if(*a != *b)
			return ((unsigned char)(*a) - (unsigned char)(*b));
		a++;
		b++;
		i++;
	}
	return(0);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 		char s[] = {-128, 0, 127, 0};
//         char sCpy[] = {-128, 0, 127, 0};
//         char s2[] = {0, 0, 127, 0};
//         char s3[] = {0, 0, 42, 0};
//         /* 1 */ printf("memcmp : %d | ft_memcmp : %d \n",memcmp(s, sCpy, 4),ft_memcmp(s, sCpy, 4));
//         /* 2 */ printf("memcmp : %d | ft_memcmp : %d \n",memcmp(s, s2, 0),ft_memcmp(s, s2, 0));
//         /* 3 */ printf("memcmp : %d | ft_memcmp : %d \n",memcmp(s, s2, 1),ft_memcmp(s, s2, 1));
//         /* 4 */ printf("memcmp : %d | ft_memcmp : %d \n",memcmp(s2, s, 1),ft_memcmp(s2, s, 1));
//         /* 5 */ printf("memcmp : %d | ft_memcmp : %d \n",memcmp(s2, s3, 4),ft_memcmp(s2, s3, 4));


// 	return 0;
// }
