#include "main.h"

/**
* print_alphabet_x10 - Function
* Description: the function prints the alphabet in lowercase 10 times
* Return: void
*/
void print_alphabet_x10(void)
{
	int i = 0, ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
