#include<stdio.h>
#include<conio.h>
 
void main() {
   struct student {
      char name[30];
      char sex;
      int rollno;
      float percentage;
   };
 
   union details {
      struct student st;
   };
   union details set;
 
   printf("Enter details:");
 
   printf("\nEnter name : ");
   scanf("%s", set.st.name);
   printf("\nEnter roll no : ");
   scanf("%d", &set.st.rollno);
 
   printf("\nEnter sex : ");
   scanf("%c", &set.st.sex);
   printf("\nEnter percentage :");
   scanf("%f", &set.st.percentage);
 
   printf("\n The student details are : \n");
   printf("\n name : %s", set.st.name);
   printf("\n Rollno : %d", set.st.rollno);
   printf("\n sex : %c", set.st.sex);
   printf("\n Percentage : %f", set.st.percentage);
 
   getch();
}