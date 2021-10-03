#include <stdio.h>
int main()
{
	float max = 0;
	float first, second, third;
	printf("Enter the first number:\n");
	scanf("%f", &first);
	max = first;
	printf("Enter the second number:\n");
	scanf("%f", &second);
	if (max <= second)
	{
		max = second;
	}
	printf("Enter the third number:\n");
	scanf("%f", &third);
	if (max <= third)
	{
		max = third;
	}
	printf("The maximum is: %f\n", max);
	return 0;
}