#include "holberton.h"

/**
 * print_times_table - function that prints the n times table, starting with 0.
 * @n: times
 */
void print_times_table(int n)
{
	int i, j, r = 0, s;

	if (n < 15 && n > 0)
	{
		for (i = 0 ; i <= n ; i++)
		{
			for (j = 0 ; j <= n ; j++)
			{
				r = j * i;
				if (j != 0)
				{
					if ((r / 100) != 0)
						_putchar(r / 100 + '0');
					else
						_putchar(' ');
				}
				s = (r % 100);
				if (j != 0)
				{
					if ((s / 10) != 0)
						_putchar(s / 10 + '0');
					else
						_putchar(' ');
				}
				_putchar(s % 10 + '0');
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
		}
}
