#include"main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{
	int ch, cnt = 0;

		for (ch = 'a'; ch <= 'z'; ++ch)
		{
			_putchar(ch);
			if (ch == 'z' && cnt < 10)
			{
				putchar('\n');
				cnt++;
				ch = 'a';
			}
		}
}
