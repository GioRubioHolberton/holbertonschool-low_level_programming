#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int a, b, c, d, f, g;

	for (a = 0 ; a <= 23 ; a++)
	{
		for (d = 0 ; d <= 59 ; d++)
		{
			b = a / 10;
			_putchar(b + '0');
			c = a % 10;
			_putchar(c + '0');
			_putchar(':');
			f = d / 10;
			_putchar(f + '0');
			g = d % 10;
			_putchar(g + '0');
			_putchar('\n');
		}
	}
}
