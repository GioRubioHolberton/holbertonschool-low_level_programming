#include "holberton.h"
/**
 * _puts_recursion - function that copies memory area.
 *
 * @s: char, pointer
 *
 */
void _puts_recursion(char *s)
{

	if (s[0] == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
