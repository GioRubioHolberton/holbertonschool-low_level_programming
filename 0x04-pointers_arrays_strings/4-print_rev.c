#include "holberton.h"

/**
 * print_rev - function that prints a string, followed by a new line.
 *
 * @s: Pointer
 *
 */
void print_rev(char *s)
{

	int c;

	for (c = 0 ; *(s + c) != '\0' ; c++)
	while (c >= 0)
	{
		_putchar(*(s + c));
		c--;
	}
	_putchar('\n');
}
