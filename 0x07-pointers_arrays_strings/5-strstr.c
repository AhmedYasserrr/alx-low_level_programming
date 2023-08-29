#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always pointer to string
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int n = 0;

	while (*haystack != '\0')
	{
		i = 0;
		n = 0;

		while (*(needle + i))
		{
			if (*(haystack + i) == *(needle + i))
			{
				n++;
			}
			i++;
		}
		if (i == n)
			return (haystack);
		haystack++;
	}
	return (0);
}
