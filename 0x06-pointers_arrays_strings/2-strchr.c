#include "holberton.h"
/**
 * *_strchr - function that locates a character in a string.
 *
 * @s: pointer
 * @c: char
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int con, aux;

	aux = c;

	for (con = 0 ; con < aux ; con++)
	{
		if (s[con] == aux)
			return (s);

		else
			return ('\0');
	}

	return (0);


}
