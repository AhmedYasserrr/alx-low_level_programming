/*
 * File: 5-print_numbers.c
 * Author: Ahmed Yasser
 */
#include <stdio.h>
/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 48; i < 48 + 10; i++)
	{
		for (j = 48; j < 48 + 10; j++)
		{
			for (k = i; k < 48 + 10; k++)
			{
				if (k == i)
					l = j + 1;
				else
					l = 48;
				for (l; l < 48 + 10; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i < 48 + 9 || j < 48 + 8)
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
