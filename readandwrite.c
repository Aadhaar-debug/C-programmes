#include <stdio.h>
int main() 
{
   FILE *fp;  
char fName[100];
 
printf("Enter file name to create :\n"); 
scanf("%s",fName);

fp=fopen(fName,"w"); 
    
if(fp==NULL)
{
   printf("File was not created!!!");
   return 0; 
}
 
printf("File was created  ");
    
putc('H',fp);
putc('e',fp);
putc('l',fp);
putc('l',fp);
putc('o',fp);
putc(' ',fp);
putc('W',fp);
putc('o',fp);
putc('r',fp);
putc('l',fp);
putc('d',fp);
    
 
printf("and data was written successfully.:\n");
fclose(fp);
 
    
fp=fopen(fName,"r");
if(fp==NULL)
{
   printf("Can't open file!!! :\n");
   return 0;
}
 
printf("Contents of file are :\n");

printf("%c",getc(fp));
printf("%c",getc(fp));
printf("%c",getc(fp));
printf("%c",getc(fp));
printf("%c",getc(fp));
printf("%c",getc(fp));
printf("%c",getc(fp));
printf("%c",getc(fp));
printf("%c",getc(fp));
printf("%c",getc(fp));
printf("%c",getc(fp));
   
fclose(fp);
return 0;
}