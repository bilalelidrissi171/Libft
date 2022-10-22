#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *a;
	unsigned char *b;
	size_t i;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i=0;
	 if(!(*a) || !(*b))
	 	return ((unsigned char)(*a) - (unsigned char)(*b));
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
