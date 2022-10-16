#include <stdio.h>

int Increment()
{
	static int i = 0;
	i++;
	return (i);
}
int main()
{
	{
		char *p1 = "hello";
		char p2[] = "hello";
		int a = Increment();
		int b = Increment();
		p1 = "world";
	}
	{
		char *p1 = "hello";
		char p2[] = "hello";
		int a = Increment();
		int b = Increment();
		p1 = "world";
		printf("p1 = %p | p2 = %p\n", p1, p2);
	}




}
