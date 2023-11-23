#include <stdio.h>
#include "main.h"

/**
* binToDec - converts binary string to a decimal number
* @b: the binary string
* Return: returns the number unless it's NULL or not 0s and 1s
*/
unsigned int binToDec(const char *b)
{
	unsigned int res = 0, i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		/* 1 0 1 */
		res <<= 1;
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			res++;
	}
	return (res);
}
