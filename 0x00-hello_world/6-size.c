#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the size of various data types
 * Return: always return 0 - success
 */

int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of a int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %i byte(s)\n", sizeof(long));
	printf("Size of a long long int: %i byte(s)\n", sizeof(long long));
	printf("Size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
