#include <stdio.h>
#define pi 3.14

float areaSquare(float side)
{
	return side*side;
}

float areaRectangle(float length, float width)
{
	return length*width;
}

float areaCircle(float radius)
{
	return pi*radius*radius;
}

int main()
{
	float area;
	float circumference;
	float perimeter;
	float perimeter2;
	float radius, side, length, width;
	int choice;
	char repeat;

	do
	{
		printf("Enter 1 for circle, 2 for square and 3 for rectangle:\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				printf("Enter radius:\n");
				scanf("%f", &radius);
				area = areaCircle(radius);
				circumference = 2 * pi * radius;
				printf("area of circle = %f",area);
				printf(" , circumference of circle = %f",circumference);
				break;
			case 2:
				printf("Enter side:\n");
				scanf("%f", &side);
				area = areaSquare(side);
				perimeter = 4 * side;
				printf("area of square = %f",area);
				printf(" , perimeter of square = %f",perimeter);
				break;
			case 3:
				printf("Enter length:\n");
				scanf("%f", &length);
				printf("Enter width:\n");
				scanf("%f", &width);
				area = areaRectangle(length, width);
				perimeter2 = 2 * length * width  ;
				printf("area of rectangle = %f",area);
				printf(" , perimeter of the rectangle = %f",perimeter2);
				break;
			default:
				printf("invalid choice\n");
				break;

		}
		printf("Do you want to continue (Y/N):\n");
		scanf(" %c",&repeat);
	}while(repeat == 'Y' || repeat == 'y');
	return 0;
}