// start the program
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a;
	printf("Enter the number:\t");
	scanf("%d",&a);
	if( (a = 0) )
		printf("%d is zero\n", a);
	else
		printf("%d is non-zero\n", a);
	// end the program
	return 0;
}