#include "main.h"

/**
 * _islower - Function
 * Description: checks if the character is in lowercase
 * @c: character to be checked
 * Return: 0 if upper and 1 if lower
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
