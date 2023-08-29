#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
	int i;
	int fs = 0;
	int ss = 0;

	for (i = 0; i < size; i++)
		fs += *(a + size * i + i);
	for (i = 0; i < size; i++)
		ss += *(a + (size - 1) * (i + 1));
	printf("%d, %d\n", fs, ss);
}
