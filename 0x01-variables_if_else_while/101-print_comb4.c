#include <stdio.h>
#include <stdlib.h>
#include "100.h"

/**
* maxCombo3 - so yea same thing here
* Return: the struct of max numbers
*/
struct max maxCombo3(void)
{
	int i, j, k;

	struct max combo3;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				combo3.maxi = i;
				combo3.maxj = j;
				combo3.maxk = k;
			}
		}
	}

	return (combo3);
}

/**
* combo3 - unique combinations of 3 digits
* Return: Void
*/
void combo3(void)
{
	int i, j, k;

	struct max res = maxCombo3();

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == res.maxi && j == res.maxj && k == res.maxk)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}

/**
* main - Entry point
* Return: zero on success
*/
int main(void)
{
	combo3();

	return (0);
}
