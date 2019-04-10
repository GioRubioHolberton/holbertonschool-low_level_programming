#include "holberton.h"

/**
 * print_triangle -  function that prints a triangle
 *
 * @size : Variable
 *
 */
void print_triangle(int size)
{
	int n, o;

	if (size > 0)
	{
		for (n = size ; n > size ; n--)
		{
			for (o = 1 ; o <= size ; o++)
			{
				if (o < n)
					_putchar ('.');
				else
					_putchar ('#');
			}
			_putchar ('\n');
		}
	}
	else
		_putchar ('\n');
}
