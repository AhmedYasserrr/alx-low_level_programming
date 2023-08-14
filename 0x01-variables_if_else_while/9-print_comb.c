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

	for (i = 48; i < 48 + 9; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}
