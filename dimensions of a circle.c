#include <stdio.h>
#define pi 3.14




float areaCircle(float radius)
{
	return pi*radius*radius;
}

int main()
{
	float area;
	float circumference;
	float radius, side;
	char repeat;

	do
	{
		
		{
				
		printf("Enter radius:\n");
		scanf("%f", &radius);
		area = areaCircle(radius);
		circumference = 2 * pi * radius;
		printf("area of circle = %f",area);
		printf(" , circumference of circle = %f",circumference);
		break;

		}
		printf("Do you want to continue (Y/N):\n");
		scanf(" %c",&repeat);
	}while(repeat == 'Y' || repeat == 'y');
	return 0;
}