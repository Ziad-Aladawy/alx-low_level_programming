#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet UPPER
 * Return: always returns 0 - success
 */

int main(void)
{
	int i;


	for (i = 97; i < 123; i++)
	{
		if (i == 91)
		{
			putchar(10);
			return (0);
		}
		putchar(i);
		if (i == 122)
		{
			i -= 58;
		}
	}
	return (0);
}
