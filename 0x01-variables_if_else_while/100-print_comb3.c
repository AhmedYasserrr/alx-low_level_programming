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

	for (i = 48; i < 48 + 9; i++)
	{
		for (j = i + 1; j < 48 + 10; j++)
		{
			putchar(i);
			putchar(j);
			if (i < 48 + 8)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
