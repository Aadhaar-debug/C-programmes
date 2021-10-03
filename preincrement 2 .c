#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a=0;
	// example 1
	/*printf("%d\n", a);
	a++;
	printf("%d\n", a);
	a++;
	printf("%d\n", a);
	a++;
	printf("%d\n", a);*/
	// example 2
	/*printf("%d\n", a);
	++a;
	printf("%d\n", a);
	++a;
	printf("%d\n", a);
	++a;
	printf("%d\n", a);*/
	// example 3
	/*printf("%d\n", a++);
	printf("%d\n", a++);
	printf("%d\n", a++);
	printf("%d\n", a++);*/
	// example 4
	printf("%d\n", ++a);
	printf("%d\n", ++a);
	printf("%d\n", ++a);
	printf("%d\n", ++a);
	return 0;
}