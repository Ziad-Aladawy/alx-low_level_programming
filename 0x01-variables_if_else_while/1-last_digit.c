#include <stdio.h>
#include <stdlib.h>

/**
 * main - takes the last digit of a random number
 * Return: always returns 0 - success
 */

int main(void)
{
	srand(time(0));
	int n = rand() - RAND_MAX / 2;

	int m = n % 10;

	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5", n, m);
	else if (n == 0)
		printf("Last digit of %d is 0 and is 0", n);
	else
		printf("Last digit of %d is %d and is less than 6 but not 0", n, m);
	return (0);

}
