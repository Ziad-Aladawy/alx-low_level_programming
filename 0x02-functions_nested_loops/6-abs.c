#include "main.h"

/**
* _abs - Function
* Description: gets the absolute value of a number
* @n: number to be checked
* Return: @n
*/

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
