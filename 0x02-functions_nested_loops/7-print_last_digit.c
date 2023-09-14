#include "main.h"

/**
* print_last_digit - Function
* Description: gets the last digit in a number
* @n: the number to be checked
* Return: @n
*/

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	n = n % 10;
	_putchar('0' + n);
	return (n);
}
