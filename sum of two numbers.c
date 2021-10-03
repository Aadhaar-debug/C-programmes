

// start the program
#include <stdio.h>
int main()
{
	// declare 3 variables
	int firstNumber, secondNumber, sum;
	// ask the user to input the value of firstNumber
	printf("Enter the first number:\t");
	// read the value of firstNumber
	scanf("%d",&firstNumber);
	// ask the user to input the value of secondNumber
	printf("\nEnter the second number:\t");
	// read the value of secondNumber
	scanf("%d",&secondNumber);
	// sum = firstNumber+secondNumber
	sum = firstNumber + secondNumber;
	// display the value of sum
	printf("\nSum of %d and %d is %d\n", firstNumber, secondNumber, sum);
	// end the program
	return 0;
}