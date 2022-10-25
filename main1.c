#include <stdio.h>
void	*l_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	while (i < count * size)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

int main()
{
	void	*p;
	size_t i = 1;
	size_t c = 1;
	size_t s = 1073741824;


	while((p = l_calloc(c , s)))
	{
		if (!p)
			break;
		//bzero(p,c * s);
		printf("%zu Gb\n",i++);

	}
}


