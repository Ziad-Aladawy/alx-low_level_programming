#include <stdio.h>
#include <stdlib.h>

/**
 * main - 
 * Return: 
 */

int main(void)
{
	int i;
	for (i = 65; i < 91; i++)
	{
		if (i == 91)
		{
			putchar(10);
			return (0);
		}
		putchar(i);
	}
	return (0);
}
