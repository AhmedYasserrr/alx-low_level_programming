#include "main.h"
/**
 * _memcpy - copy a block of memory
 * @dest: dest address of memory passed to function
 * @src: source  address of memory passed to function
 * @n: number of units to be changed
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n--)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
