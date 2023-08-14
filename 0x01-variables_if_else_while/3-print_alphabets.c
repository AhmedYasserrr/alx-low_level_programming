/*
 * File: 3-print_alphabets.c
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

	for (i = 97; i < 97 + 26; i++)
	{
		putchar(i);
	}
	for (i = 65; i < 65 + 26; i++)
        {
                putchar(i);
        }
	putchar('\n');
	return (0);
}
