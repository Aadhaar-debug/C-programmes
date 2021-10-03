#include <stdio.h>

struct person
{
 char name[25];
 int age[100];
 float salary;
}p[10];

int main(void) 
{
 int i=0;
 
 for(i=0;i<10;i++)
 {
  printf("\n Enter Person Name : ");
  scanf("%s",p[i].name);
  printf("\n Enter Person age : ");
  scanf("%s",p[i].age);
  printf("\n Enter Person Salary : ");
  scanf("%f",&p[i].salary);
 }
 
 for(i=0;i<10;i++)
 {
  printf("\n Person %d Detail",i+1);
  printf("\n Name   = %s",p[i].name);
  printf("\n age    = %s",p[i].age);
  printf("\n Salary = %.2f",p[i].salary);
 }
 return 0;
}
