#include <stdio.h>
#include "main.h"

/**
* binToDec - converts binary string to a decimal number
* @bin: the binary string
* Return: returns the number unless it's NULL or not 0s and 1s
*/
unsigned int binToDec(char *bin)
{
	unsigned int res = 0, i;

	if (!bin)
		return (0);

	for (i = 0; bin[i] != '\0'; i++)
	{
		/* 1 0 1 */
		res <<= 1;
		if (bin[i] != '0' && bin[i] != '1')
			return (0);
		if (bin[i] == '1')
			res++;
	}
	return (res);
}
