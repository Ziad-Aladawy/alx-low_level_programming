#include"main.h"

/**
* main - Entry Point
* Description: prints "_putchar"
* Return: Normally 0
*/
int main(void)
{
	char string[] = "_putchar";
	int i = 0;
	while (string[i] != '\0')
	{
		_putchar(*string);
		i++;
	}
	_putchar('\n');
}

