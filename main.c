#include <stdio.h>
#include <string.h>
#include <string.h>
#include "libft.h"

int main()
{
	void	*p;
	size_t i = 1;
	size_t c = 1;
	size_t s = 1073741824;


	while((p = calloc(c , s)))
	{
		if (!p)
			break;
		//bzero(p,c * s);
		printf("%zu Gb\n",i++);

	}
}
