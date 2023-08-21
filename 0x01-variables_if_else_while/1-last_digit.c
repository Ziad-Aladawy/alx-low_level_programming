#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - takes the last digit of a random number
 * Return: always returns 0 - success
 */

int main(void)
{
	int n = rand() - RAND_MAX / 2;

	int m = n % 10;

	srand(time(0));
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	else if (m == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else
		printf("Last digit of %d is %d and is less than 6 but not 0\n", n, m);
	return (0);

}
