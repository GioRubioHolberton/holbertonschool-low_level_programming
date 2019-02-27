#include "holberton.h"
/**
 * _puts_recursion - function that copies memory area.
 *
 * @n: char, pointer
 *
 *Return: src
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
