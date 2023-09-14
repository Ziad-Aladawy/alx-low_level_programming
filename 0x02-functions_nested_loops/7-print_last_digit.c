#include "main.h"

/**
* print_last_digit - Function
* Description: gets the last digit in a number
* @n: the number to be checked
* Return: @n
*/

int print_last_digit(int n)
{
	n = n % 10;

	_putchar(48 + n);
	return (n);
}
