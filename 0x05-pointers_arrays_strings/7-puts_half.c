#include "yasser.h"

/**
 * puts_half - function with one argument
 * @str: char type
 *
 * Description: prints half of a string
 * Return: na
 */
void puts_half(char *str)
{
	int i, l;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	l = (i + 1) / 2;
	while (l < i)
	{
		l++;
		_putchar(*(str + l - 1));
	}
	_putchar('\n');
}
