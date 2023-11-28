#include "main.h"
/**
* infinite_add - adds two numbers from strings
* @n1: first number
* @n2: second number
* @r: result
* @size_r: size of r
* Return: r or zero
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int size1 = _strlen(n1) - 1, size2 = _strlen(n2) - 1;
	int i = size1, j = size2, k = size_r;
	int num1, num2, sum, carry = 0, digit;

	if (size1 > size_r - 1 || size2 > size_r - 1)
		return ("0");
	while (k--)
	{
		if (i < 0)
			num1 = 0;
		else
			num1 = abs(n1[i] - '0');
		if (j < 0)
			num2 = 0;
		else
			num2 = abs(n2[j] - '0');
		sum = num1 + num2 + carry;
		digit = sum % 10;
		carry = sum / 10;
		if (k != 0)
			return ("0");
		else if (k != 0 && carry > 0)
			r[k] = digit + '0';
		i--;
		j--;
	}
	return (r);
}
