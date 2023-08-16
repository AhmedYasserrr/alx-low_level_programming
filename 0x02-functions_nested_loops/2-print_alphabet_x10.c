/*
 * File: 2-print_alphabet.c
 * Author: Ahmed Yasser
 */
#include "main.h"
/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i;
	int t;

	t = 10;
	while (t--)
	{
		for (i = 97; i < 97 + 26; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
