#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
	unsigned char	a[6]  = "bilal";;
	size_t len = 6;
	int x = 0;
	char *p;
	p = a;
	// while (len && a[x])
	// {
	// 	a[x] = 97;
	// 	len--;
	// 	x++;
	// }
	// if(len )
	memset(p,97,20);
	printf("%s\n",a);
}
