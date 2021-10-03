#include <stdio.h>
int main()
{
	// declare the variables
	float principal;
	float rate;
	float time;
	float simpleInterest;
	// get the value of principal from the user
	printf("\nPlease enter the value of principal:\t");
	scanf("%f",&principal);
	// get the value of rate from the user
	printf("\nPlease enter the value of rate:\t");
	scanf("%f",&rate);
	// get the value of time from the user
	printf("\nPlease enter the value of time:\t");
	scanf("%f",&time);
	// calculate simpleInterest
	simpleInterest = (principal*rate*time)/100;
	// show the value of simpleInterest to the user
	printf("\nSimple Interest = %f\n",simpleInterest);
	return 1;
}