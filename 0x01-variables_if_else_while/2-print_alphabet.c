#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the alphabet
 * Return: always returns 0 - success
 */

int main(void)
{
	putAlpha();
	return (0);
}

/**
 * putAlpha - the function that prints the task
 * Return: Void
*/
void putAlpha(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
