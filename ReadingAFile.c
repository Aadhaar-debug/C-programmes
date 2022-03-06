#include<stdio.h>

int main()
{
    FILE *ptr;
    char line_arr[50];
    char file_name[20];

    printf("Enter the name of the file\n");
    scanf("%s",&file_name);

    ptr = fopen(file_name,"r");
    if(ptr == NULL)
    {
    	printf("The file does not exist\n");
    }
    else
    {
    	fscanf(ptr,"%s",&line_arr);
        printf(line_arr);
        fclose(ptr);
    }
    return 0;
}
