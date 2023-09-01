#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0, 1, - 9
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i == '9')
		{
			putchar('\n');

			return (0);
		}
		putchar(',');
		putchar(' ');
	}

	return (0);
}
