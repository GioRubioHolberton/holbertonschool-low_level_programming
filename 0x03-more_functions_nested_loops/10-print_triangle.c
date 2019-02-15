#include "holberton.h"

/**
 * print_square -  function that prints a square, followed by a new line.
 *
 * @size : Variable
 *
 */
void print_triangle(int size)

{
	int n, o;

	if (size > 0)
	{
		for (n = 0 ; n < size ; n++)
		{
			for (o = 0 ; o < size ; o++)
			{
				_putchar ('.');
			}
			_putchar ('\n');
		}
	}
	else
		_putchar ('\n');
}
