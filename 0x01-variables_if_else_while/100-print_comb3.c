#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combinations of 2 digits
 * Return: always returns 0 - success
 */

int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i == '8' && j == '9')
			{
				putchar('\n');
				return (0);
			}
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
