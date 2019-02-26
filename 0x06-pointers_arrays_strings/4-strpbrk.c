#include "holberton.h"
/**
 * *_strpbrk - spn function that gets the length of a prefix substring.
 *
 * @s: pointer
 * @accept: pointer
 *
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
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
