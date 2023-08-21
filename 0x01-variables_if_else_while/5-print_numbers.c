#include <stdio.h>
#include <stdlib.h>

/**
 * main - print single integers
 * Return: always returns 0 - success
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	putchar(10);
	return (0);
}
