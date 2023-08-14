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

	for (i = 48; i < 48 + 8; i++)
	{
		for (j = i + 1; j < 48 + 9; j++)
		{
			for (k = j + 1; k < 48 + 10; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i < 48 + 7)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
