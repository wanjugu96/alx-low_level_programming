#include<stdio.h>
#include <stdlib.h>
/* prints the size of various types on the computer it is compiled */
int main(void)
{
	int integer;
	char character;
	float decimal;
	long long int longlong_int;
	long int long_integer;
	printf("Size of a char: %zu byte(s)", sizeof(character));
	printf("Size of a int: %zu byte(s)", sizeof(integer));
	printf("Size of a long int: %zu byte(s)", sizeof(long_integer));
	printf("Size of a long long int: %zu byte(s)", sizeof(longlong_int));
	printf("Size of a float: %zu byte(s)", sizeof(decimal));

	return (0);
}
