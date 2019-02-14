#include "holberton.h"

/**
 * print_numbers -  function that prints the numbers, from 0 to 9
 *
 */
void print_numbers(void)

{
	int c;

	c = 0;

	while (c <= 9)
	{
		_putchar('0' + c);
		c++;
	}
	_putchar('\n');
}
