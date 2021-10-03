#include <stdio.h>
int main()
{
	char char_array[] = "nakul's question";
	printf("char_array\n");
	printf("%s\n", char_array);
	printf("%ld\n", sizeof(char_array));
	char char_array_1[10] = "nakul's question";
	printf("char_array 1\n");
	printf("%s\n", char_array_1);
	printf("%ld\n", sizeof(char_array_1));
	char char_array_2[16] = "nakul's question";
	printf("char_array 2\n");
	printf("%s\n", char_array_2);
	printf("%ld\n", sizeof(char_array_2));
	char char_array_3[50] = "nakul's question";
	printf("char_array 3\n");
	printf("%s\n", char_array_3);
	printf("%ld\n", sizeof(char_array_3));
	char char_array_4[50] = "nak\0ul's question";
	printf("char_array 4\n");
	printf("%s\n", char_array_4);
	printf("%ld\n", sizeof(char_array_4));
	char char_array_5[17] = "nakul's question\0";
	printf("char_array 5\n");
	printf("%s\n", char_array_5);
	printf("%ld\n", sizeof(char_array_5));
	return 0;
}
//aadhaar - MIET jammu




