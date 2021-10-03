#include<stdio.h>

struct student {
                char name[20];
                int rollno;
                float marks;
               };
int main( )
{
        int i,n;
        printf("Enter how many records u want to store :: ");
        scanf("%d",&n);
        struct student stuarr[n];
        printf("Enter name, roll no. and marks Below :: \n");

        for(i=0; i<n; i++)
        {
                printf("\nEnter %d record :: \n",i+1);

                printf("Enter Name :: ");
                scanf("%s",stuarr[i].name);
                printf("Enter RollNo. :: ");
                scanf("%d",&stuarr[i].rollno);
                printf("Enter Marks :: ");
                scanf("%f",&stuarr[i].marks);

        }
        printf("\n\tName\tRollNo\tMarks\t\n");
        for(i=0; i<n; i++)
                printf("\t%s\t%d\t%.2f\t\n", stuarr[i].name, stuarr[i].rollno, stuarr[i].marks);

                return 0;
}