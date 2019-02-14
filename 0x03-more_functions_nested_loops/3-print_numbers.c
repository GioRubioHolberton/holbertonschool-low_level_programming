#include "holberton.h"

/**
 * print_numbers -  function that prints the numbers, from 0 to 9, followed by a new line.
 *
 * @c: variable
 *
 * Return: 1 if it's Upper
 */
void print_numbers(void)

{
	int n;

	n = 0;
	while (n <= 9)
	{
		_putchar('0' + n);
		n++;
	}
	_putchar('\n');
}
