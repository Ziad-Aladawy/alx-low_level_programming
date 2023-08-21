#include <stdio.h>
#include <stdlib.h>

/**
 * main - alphabet again
 * Return: always return 0 - success
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
	}
	return (0);
}
