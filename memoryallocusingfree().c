#include <stdio.h> 
#include<stdlib.h> 
 int main() 
 { 
    int i,j,k, n ; 
    int* Array;  
    printf("Enter the number of elements of Array : "); 
    scanf("%d", &n ); 
    Array= (int*) calloc(n, sizeof(int)); 
    if( Array== (int*)NULL) 
      { 
          printf("Error. Out of memory.\n"); 
          exit (0); 
       } 
        printf("Address of allocated memory= %u\n" , Array); 
        printf("Enter the values of %d array elements:", n); 
         for (j =0; j<n; j++) 
              scanf("%d",&Array[j]); 
              printf("Address of Ist member= %u\n", Array); 
              printf("Address of 2nd member= %u\n", Array+1); 
              printf("Size of Array= %u\n", n* sizeof(int) ); 
      for ( i = 0 ; i<n; i++) 
        printf("Array[%d] = %d\n", i, *(Array+i)); 
        free(Array); 
        printf("After the action of free() the array elements are:\n"); 
        for (k =0;k<n; k++) 
           printf("Array[%d] = %d\n", k, *(Array+i)); 
           return 0; 
 } 