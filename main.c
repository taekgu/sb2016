#include <stdio.h>

extern int foo1(int a, int b);
extern int foo2(int a, int b);

int main()
{
	int a = 5;
	int b = 4;
	printf("show fo1 : %d , show fo2 : %d\n",foo1(a,b),foo2(a,b));
	return 1;
}
