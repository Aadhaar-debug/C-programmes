#include<stdio.h>
#include<stdlib.h>     //required for using realloc() in C
int main()
{
    int *ptr;
    int i;
    // typecasting pointer to integer
    ptr= (int *)calloc(4,sizeof(int));  
 
     
    if(ptr!=NULL)
    {
        for(i=0;i<4;i++)
        {
                printf("Enter number number %d: ", i+1);
                scanf("%d",(ptr+i));
                }
        }
       //reallocation of 6 elements
        ptr= (int *)realloc(ptr,6*sizeof(int)); 
        if(ptr!=NULL)
        {
                printf("\nNew memory allocated!\n");
                for(;i<6;i++)
                {
                        printf("Enter new number %d: ",i);
                        scanf("%d",(ptr+i));
                }
        }
        printf("\n\nThe numbers are:\n");
        for(i=0;i<6;i++)
        {
                printf("%d \n",ptr[i]);
        }
        free(ptr);
       return 0;
}