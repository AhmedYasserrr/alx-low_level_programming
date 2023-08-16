#include "main.h"

/**
 * _isalpha - checks for character
 * @c: the character to check
 * Return: 1 if c is alphabetic, 0 otherwise
 */

int _isalpha(int c)
{
	if  ((c >= 97 && c < 97 + 26) || (c >= 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
