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

	for (i = 48; i < 48 + 10; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 97 + 6; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
