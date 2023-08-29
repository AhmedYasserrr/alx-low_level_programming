#include "main.h"
/**
 * _strchr - fill a block of memory with a specific value
 * @s: starting address of memory passed to function
 * @c: the filling value
 *
 * Return: pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			break;
		s++;
	}
	return (s);
}
