// check if a character is vovel or consonant
#include <stdio.h>
int main(int argc, char const *argv[])
{
	char letter;
	printf("Enter a character:\n");
	scanf("%c", &letter);
	switch(letter)
	{
		case 'a':
		printf("yes its a vowel\n");
		break;
		case 'e':
		printf("yes its a vowel\n");
		break;
		case 'i':
		printf("yes its a vowel\n");
		break;
		case 'o':
		printf("yes its a vowel\n");
		break;
		case 'u':
		printf("yes its a vowel\n");
		break;
		case 'A':
		printf("yes its a vowel\n");
		break;
		case 'E':
		printf("yes its a vowel\n");
		break;
		case 'I':
		printf("yes its a vowel\n");
		break;
		case 'O':
		printf("yes its a vowel\n");
		break;
		case 'U':
		printf("yes its a vowel\n");
		break;
		default:
		printf("its a Consonant\n");
	}
	return 0;
}