
#include "libft.h"

int main()
{
	size_t	size = 1073741824;
	size_t	count = 1;
	int i = 1;
	void *p;

	while ((p = calloc(size , count)) != NULL )
	{
		//memset(p,0,1073741824);
		printf("%d\n",i++);
	}

	return 0;
}
