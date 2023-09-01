#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * main - prints a string to the stderr
 * Return: always returns 0 - success
 */

int main(void)
{
	char *string;

	string = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, string, strlen(string));
	return (1);
}
