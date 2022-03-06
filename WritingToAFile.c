#include<stdio.h>

int main()
{
    FILE *ptr;
    char line_arr[50];
    char file_name[20];

    ptr = fopen("generated.txt","w");
    fprintf(ptr, "hello world this is great" );
    fclose(ptr);


  
    return 0;
}
