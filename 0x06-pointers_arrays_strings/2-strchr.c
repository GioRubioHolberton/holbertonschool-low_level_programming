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
	int con;

	for (con = 0 ; s[con] ; con++)
	{
		if (s[con] == c)
			return (&s[con]);

	}

	if (s[con] == '\0')
		return (&s[con]);


	return (0);


}
