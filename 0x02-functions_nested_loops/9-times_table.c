#include "holberton.h"

/**
 * times_table - function that prints the 9 times table, starting with 0.
 *
 *
 */
void times_table(void)
{
	int i, j, r = 0;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			r = j * i;
			if (j != 0)
			{
				if ((r / 10) != 0)
					_putchar(r / 10 + '0');
				else
					_putchar(' ');
			}
			if (j != 9)
			{
				_putchar(r % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(r % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
