#include <stdio.h>
int main()
{
	int number;
	printf("Enter the number\n");
	scanf("%d",&number);
	if (number%9 == 0)
	{
		printf("%d is divisible by 9\n", number);
	}
	else
	{
		printf("%d is not divisible by 9\n", number);
	}
	return 0;
}