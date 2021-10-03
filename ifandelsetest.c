#include<stdio.h>
int main ()
{
    float max = 0;
    float a , b , c , d ;
    printf("enter the first number :\n");
    scanf("%f",&a);
    max = a ;
    printf("enter the second number :\n");
    scanf("%f",&b);
    if(max <= b)
    {
        max = b;
    }
    printf("enter the third number :\n");
    scanf("%f",&c);
    if(max <= c )
    {
        max = c;
    }
    printf("enter the fourth number:\n");
    scanf("%f",&d);
    if(max <= d)
    {
        max = d;
    }
    printf("max of the numbers is :\n%f",max);
    return 0;
}