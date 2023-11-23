#include <stdio.h>
#include "main.h"

/**
* binToDec - converts binary string to a decimal number
* @bin: the binary string
* Return: returns the number unless it's NULL or not 0s and 1s
*/
unsigned int binToDec(char *bin)
{
	int res = 0, i;

	for (i = sizeof(bin) - 1; i >= 0; i--)
	{
		/* 1 0 1 */
		res <<= 1;
		if (bin == NULL || bin[i] != '0' && bin[i] != '1')
			return (0);
		if (bin[i] == '1')
			res++;
	}
	return (res);
}
