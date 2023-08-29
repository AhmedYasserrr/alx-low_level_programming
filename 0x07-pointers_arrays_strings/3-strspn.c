#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always unsigned int n
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int n = 0;

	while (*s)
	{
		i = 0;

		while (*(accept + i))
		{
			if (*s == *(accept + i))
			{
				n++;
				break;
			}
			i++;
		}
		if (*(accept + i) == '\0')
			return (n);
		s++;
	}
	return (n);
}
