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

	while (str[con])
	{
		if (con + 1 != '\0')
		{
			_putchar(str[con]);
			con = con + 2;
		}
		else
			_putchar(str[con]);
	}
	_putchar('\n');
}
