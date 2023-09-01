#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combinations of 2 digits
 * Return: always returns 0 - success
 */

int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == '7' && j == '8' && k == '9')
				{
					putchar('\n');
					return (0);
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
