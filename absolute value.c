#include <stdio.h>
int main()
{
	double x;
	printf("ENter the value of x:\n");
	scanf("%lf", &x);
	if (x<0)
	{
		x = -x;
	}
	printf("The absolute value is: %lf\n", x);
	return 0;
}