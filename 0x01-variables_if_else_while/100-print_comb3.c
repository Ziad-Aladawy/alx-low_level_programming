#include <stdio.h>
#include <stdlib.h>
void combo2(void);
typedef struct max Struct;
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
 * struct max - Short description
 * @maxi: First member
 * @maxj: Second member
 *
 * Description: Longer description
 */
struct max
{
	int maxi, maxj;
};
/**
 * maxCombo - get the largest combination possible
 * @maxi: maximum i
 * @maxj: maximum j
 * Return: the max number
*/
Struct maxCombo(void)
{
	Struct max;
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
	Struct res = maxCombo();

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
