#include "holberton.h"

/**
 * print_sign - prints the sign of a number.
 *
 * @n: variable
 *
 * Return: 1 if it's positive
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}

	else if (n == 0)
		return (0);

	else
		_putchar(45);
		return (-1);
}
