#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = '0'; i < '3'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i == '2' && j == '4')
				break;
			for (k = '0'; k < '6'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}

}
