#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory passed to function
 * @b: the filling value
 * @n: number of units to be changed
 *
 * Return: changed array with new value 
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n--)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
