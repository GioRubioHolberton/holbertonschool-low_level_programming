#include "holberton.h"

/**
 * print_number -  function that prints a triangle
 *
 * @n : number to print
 *
 */
void print_number(int n)
{
	unsigned int i, j, aux, m, d = 1;

	aux = n;
	m = n;
	if (n < 0)
	{
		_putchar('-');
		aux = -aux;
		m = -m;
	}
	for (i = 0 ; aux / 10 > 0 ; i++)
	{
		aux = aux / 10;
		d = d * 10;
	}

	for (j = i ; j > 0 ; j--)
	{
		_putchar(m / d + '0');
		m = m % d;
		d = d / 10;
	}
	_putchar(m % 10 + '0');
}
