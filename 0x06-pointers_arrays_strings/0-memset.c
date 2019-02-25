#include "holberton.h"
/**
 * *_memset - fills the first n bytes of the memory area
 *
 * @s: pointet
 * @n: unsigned int
 * @b: char
 *
 *Return: dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int con;

	for (con = 0 ; con < n ; con++)
		s[con] = b;

	return (s);
}
