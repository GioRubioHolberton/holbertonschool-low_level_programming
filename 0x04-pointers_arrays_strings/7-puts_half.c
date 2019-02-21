#include "holberton.h"

/**
 *rev_string - function that reverses a string.
 *
 *@s: Pointer
 */
void puts_half(char *str)
{
	int con, aux;
	
	con = 0;
	while (*(str + con))
		con++;
	aux = con / 2;
	
	while (str[aux] != '\0')
	{
		_putchar(str[aux]);
		aux++;
	}
	_putchar('\n');
}
