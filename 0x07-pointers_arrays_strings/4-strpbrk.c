#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always unsigned int n
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s != '\0')
	{
		i = 0;

		while (*(accept + i))
		{
			if (*s == *(accept + i))
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return (0);
}
