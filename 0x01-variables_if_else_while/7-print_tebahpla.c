/*
 * File: 2-print_alphabet.c
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

	for (i = 97 + 25; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
