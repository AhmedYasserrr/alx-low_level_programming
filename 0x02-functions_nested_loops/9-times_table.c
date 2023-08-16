#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int t;
	int i;
	int x;

	for (t = 0; t <= 9; t++)
	{
		for (i = 0; i < 10; i++)
		{
			x = t * i;
			if (i == 0)
			{
				_putchar(x + '0');
			}

			if (x < 10 && i != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(x + '0');
			} else if (x >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
		}
		_putchar('\n');
	}

}
