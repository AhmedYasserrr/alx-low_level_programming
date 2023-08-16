#include "main.h"

/**
 * int _islower(int c) - Entry point
 * Return:0
 */

int _islower(int c)
{
	if  (c >= 97 && c < 97 + 26)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
