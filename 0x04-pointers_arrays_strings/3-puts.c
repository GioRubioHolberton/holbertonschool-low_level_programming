#include "holberton.h"

/**
 * _puts - function that prints a string, followed by a new line.
 *
 * @str: Pointer
 *
 */
void _puts(char *str)
{
	int p;

	for (p = 0 ; *str != '\0' ; str++)
	{
		_putchar(*str);
		p++;
	}
	_putchar('\n');
}
