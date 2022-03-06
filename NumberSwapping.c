#include<stdio.h>

int swap (int *a , int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
}
void wrong_swap (int a , int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;

}
int main()
{
	int a = 3;
	int b = 4;
	printf("The value of x and y before swap is equal to %d and %d \n",a , b );
	wrong_swap( a , b);
	swap( &a , &b);
	printf("The value of x and y after swap is equal to %d and %d \n",a , b );
}