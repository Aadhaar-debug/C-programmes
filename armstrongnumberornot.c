#include<stdio.h>
#include<conio.h>
 
int main()
{
 int n,num,r,ans=0;
 
 printf("Enter a positive integer: ");
 scanf("%d", &num);
 n =num;

while(n>0)
{
 r=n%10;
 ans=ans+r*r*r;
 n=n/10;
}
 
if(ans==num)
printf("%d is an Armstrong number.",num);
else
printf("%d is not an Armstrong number.",num);
return 0;
}
