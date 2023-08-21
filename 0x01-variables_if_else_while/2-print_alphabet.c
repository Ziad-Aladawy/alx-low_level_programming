#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the alphabet
 * Return: always returns 0 - success
 */

int main(void)
{
	for(int i=97; i<=123; i++)
	{
		if(i == 123)
		{
			putchar(32);
			return (0);
		}
		putchar(i);
	}
	return (0);
}
