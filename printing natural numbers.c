#include <stdio.h>
int main()
{
	int n, count = 0;
	printf("Enter the number of natural numbers you want to print:\n");
	scanf("%d", &n);
	while(count<n)
	{
		printf("%d\n", ++count);
	}
	return 0;
}