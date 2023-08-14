/*
 * File: 1-last_digit.c
 * Author: Ahmed Yasser
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int d;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

        d = abs(n) % 10;
	if (n < 0 && d != 0)
	{
		d = -1 * d;
		printf("%d is %d and is less than 6 and not 0\n", n, d);
	}
	else if (d == 0)
	{
		printf("%d is 0 and is 0\n", n);
	}
	else
	{
		if(d > 5)
			printf("%d is %d and is greater than 5\n", n, d);
		else 
			printf("%d is %d and is less than 6 and not 0\n", n, d);
	}
	return (0);
}
