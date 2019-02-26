#include "holberton.h"
/**
 * *_strchr - spn function that gets the length of a prefix substring.
 *
 * @s: pointer
 * @c: char
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int con;

	for (con = 0 ; s[con] ; con++)
	{
		if (s[con] == c)
			return (&s[con]);

	}

	if (s[con] != c)
		return (0);

	else
		return (&s[con]);


}
