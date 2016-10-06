#include <stdio.h>

extern int foo1(int a, int b);
extern int foo2(int a, int b);

int main()
{

	int a = 14;
	int b = 4;
	printf("show111 foo1 : %d , show foo2 : %d\n",foo1(a,b),foo2(a,b));
	return 1;
}
