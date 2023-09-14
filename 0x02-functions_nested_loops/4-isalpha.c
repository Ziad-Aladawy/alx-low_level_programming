#include "main.h"

/**
* _isalpha - Function
* Description: the function checks if the character is an alpha
* @c: character to be checked
* Return: returns 1 if alpha or 0 if otherwise
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	return (0);
}
