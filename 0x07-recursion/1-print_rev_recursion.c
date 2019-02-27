#include "holberton.h"
/**
 * _print_rev_recursion - function that copies memory area.
 *
 * @s: char, pointer
 *
 */
void _print_rev_recursion(char *s)
{

	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
