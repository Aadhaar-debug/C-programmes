//By @aadhaar_koul_
#include<stdio.h>
#define ROT 13

int main(void)
{
    int c,e;
    printf("-------------TEXT TO ROT 13 ALGORITHM CONVERTER-----------\n");
    printf("---------------------By aadhaar_koul_-------------------\n\n");
    printf("----------------------------------------------------------\n");
    printf("Type a charac or a string to get its ROT13 encripted form\n\n");
    printf("CONVERT YOUR ENCRIPTION TO TEXT ON ---https://rot13.com/---\n");
    printf("------------------Press ctrl+c to end---------------------\n\n");
    printf("----------------------Start typing------------------------\n");

    while((c=getchar())!=EOF)
    {
        if(c >='A' && c <='Z')
        {
            if((e = c + ROT) <= 'Z')
            {
              putchar(e);
            }
            else
            {
              e = c - ROT;
              putchar(e);
            }
        }
        else if(c >='a' && c <='z')
        {
            if((e= c + ROT) <= 'z')
            {
              putchar(e);
            }
            else
            {
              e = c - ROT;
              putchar(e);
            }
        }
        else
        {
          putchar(c);
        }
    }
    
return 0;
}
