#include "holberton.h"

/**
 * print_square -  function that prints a square, followed by a new line.
 *
 * @size : Variable
 *
 */
void print_square(int size)

{
	int n, o;

	for (n = 0 ; n < size ; n++)
	{
	if (size > 0)
	{
		for (o = 0 ; o < size ; o++)
		_putchar ('#');
		_putchar ('\n');
	}
	else
		_putchar ('\n');
	}
}
