#include "holberton.h"

/**
 * print_diagonal -  function that prints a square, followed by a new line.
 *
 * @n : Variable
 *
 */
void print_diagonal(int n)

{
	int o, p;

	if (n > 0)
	{
		for (o = 0 ; o < n ; o++)
		{
			for (p = 0 ; p < o ; p++)
			{
				_putchar (' ');
			}
			_putchar ('\\');
			_putchar ('\n');
		}
	}
	else
		_putchar ('\n');
}
