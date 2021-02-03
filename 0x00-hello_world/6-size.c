#include<stdio.h>
#include <stdlib.h>
/* main.c */
int main(void)
{
	int integer;
	char character;
	float decimal;
	long long int longlong_int;
	long int long_integer;

	printf("Size of a char: %zu byte(s)\n", sizeof(character));
	printf("Size of a int: %zu byte(s)\n", sizeof(integer));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long_integer));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlong_int));
	printf("Size of a float: %zu byte(s)\n", sizeof(decimal));

	return (0); }
