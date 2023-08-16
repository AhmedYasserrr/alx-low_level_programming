#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Return:0
 */

void print_alphabet_x10(void)
{
	int i;
	int t;

	t = 10;
	while (t--)
	{
		for (i = 97; i < 97 + 26; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
