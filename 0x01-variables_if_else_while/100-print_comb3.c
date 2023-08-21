#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combinations of 2 digits
 * Return: always returns 0 - success
 */

int main(void)
{
	int i, j;

	for (i = 48 ; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
				break;
			putchar(44);
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
