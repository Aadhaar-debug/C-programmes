#include <stdio.h>
int main()
{
   int n, i, count = 0;
 
    printf("Enter number to check prime number or not");
    scanf("%d",&n);
    i=2;
    while( i<=n/2)
    {
        // check for non prime number
        if(n%i==0)
        {
            count=1;
            break;
        }
        i++;
    }
 
    if (count==0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);
 
    return 0;
    
}
 