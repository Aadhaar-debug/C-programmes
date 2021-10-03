#include <stdio.h>

int main()
{
  {
	float area;
	float perimeter;
	float side;
	char repeat;
		
	printf("Enter side\n");
	scanf("%f", &side);
	area = side * side;
    perimeter = 4 * side ; 
	printf("area of square = %f",area);
	printf(" , perimeter of square = %f",perimeter);
	return 0;
  }
   
}
		