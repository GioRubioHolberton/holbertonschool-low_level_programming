#include "holberton.h"

/**
 * print_line -  function that draws a straight line in the terminal.
 *
 * @n : Variable
 *
 */
void print_line(int n)

{
	int o;

	if (n > 0)
	{
		for (o = 0 ; o < n ; o++)
		_putchar ('_');
		_putchar ('\n');
	}
	else
		_putchar ('\n');
}
