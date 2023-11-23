#include <stdio.h>
#include <stdlib.h>
#include "100.h"
void combo2(void);
/**
 * main - prints all possible combinations of 2 digits
 * Return: always returns 0 - success
 */

int main(void)
{
	combo2();
	return (0);
}

/**
 * maxCombo - get the largest combination possible
 * Return: the max number
*/
struct max maxCombo(void)
{
	struct max max;
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			max.maxi = i;
			max.maxj = j;
		}
	}

	return (max);
}
/**
 * combo2 - prints all 2 digit combinations
 * Return: Void
*/
void combo2(void)
{
	int i, j;
	struct max res = maxCombo();

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i == res.maxi && j == res.maxj)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
