#include <stdio.h>

int main()
{
    char in_name[80];
    FILE *in_file;
    int ch, character = 0, line = 0, space = 0, tab = 0;

    printf("Enter file name:\n");
    scanf("%s", in_name);

    in_file = fopen(in_name, "r");

    if (in_file == NULL)
        printf("Can't open %s for reading.\n", in_name);
    else
    {
        while ((ch = fgetc(in_file)) != EOF)
        {
            character++;
            if (ch == ' ')
                space++;
            if (ch == '\n')
                line++;
            if (ch == '\t')
                tab++;
        }
        fclose(in_file);
        
        printf("\nNumber of characters = %d", character);
        printf("\nNumber of spaces = %d", space);
        printf("\nNumber of tabs = %d", tab);
        printf("\nNumber of lines = %d", line);
    }
    return 0;
}