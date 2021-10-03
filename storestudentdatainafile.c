#include <stdio.h>

#define SIZE 1024

int main()
{
    char text[SIZE]={0},record[100];
	char ch;
	int  cnt=0,len;
	FILE *fp; /*file pointer*/

/*create file*/
	fp=fopen("file1.txt","w");
	
	if(fp==NULL)
	{
		printf("Error in creating file");
		return -1;
	}
	
	printf("Enter student details line wise (press # to save and close):\n");
	while(1)
	{
		ch=getchar();
		if(ch=='#')
		{
			break;
		}
		fputc(ch,fp);
	}
	fclose(fp); //close the file
	printf("File saved successfully\n");
	
	/*open file*/
	fp=fopen("file1.txt","r");
	if(fp==NULL)
	{
		printf("Error in opening file.\n");
		return -1;
	}

	printf("Entered records are:\n");
	//read content from file
	cnt=0;
    while((ch=fgetc(fp))!=EOF)
	{
		if(ch==0x0A)//check new line
		{
			record[cnt++]='\0';
			cnt=0;
			printf("%s\n", record);
			continue;
		}
		record[cnt++]=ch;
    }	
	fclose(fp);
	return 0;
}