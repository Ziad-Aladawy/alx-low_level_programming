#include <stdio.h>
#include "main.h"

/**
 * length - get the length of bit of the number
 * @n: the number
 * Return: length
*/
int length(unsigned long int n)
{
	int l = 0;

	while (n > 1)
	{
		l++;
		n >>= 1;
	}
	return (l);
}

/**
* print_binary - prints binary from decimal
* @n: number to be converted
* Return: nothing
*/
void print_binary(unsigned long int n)
{
	unsigned long long i;

	for (i = 1 << length(n); i > 0; i >>= 1)
	{
		if (n & i)
			_putchar('1');
		else
			_putchar('0');
	}
}
