#include "holberton.h"
/**
 * _strspn - spn function that gets the length of a prefix substring.
 *
 * @s: pointer
 * @accept: char
 *
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	int con = 0, iter;

	while (s[con] != '\0')
	{
		iter = 0;
		while (s[con] != accept[iter] && accept[iter] != '\0')
		{
			iter++;
		}
		if (accept[iter] == '\0')
			return (con);

		con++;
	}

	return (con);
}
