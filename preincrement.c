#include <stdio.h>
int main()
{
	int a=5;
	int b;
	b = ++a;
	// b = a;
	// a = a+1;

	printf("a= %d\t b= %d\n", a);
	printf("b= %d\n", b);
	return 0;
}