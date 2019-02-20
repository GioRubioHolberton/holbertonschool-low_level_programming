#include "holberton.h"

/**
 * puts2 - function that returns the length of a string.
 *
 * @str: Pointer
 *
 */
void puts2(char *str)
{
	int con = 0;

	while (str[con] != '\0')
	{
		_putchar(str[con]);
		con = con + 2;
	}
	_putchar('\n');
}
