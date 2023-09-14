#include "main.h"
#include <limits.h>
/**
* main - Entry Point
* Description: prints "_putchar"
* Return: Normally 0
*/
int main(void)
{
	char *string = "_putchar";

	while (*string != '\0')
	{
		_putchar(*string);
		string++;
	}
	_putchar('\n');

	return (0);
}

