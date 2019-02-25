#include "holberton.h"
/**
 * *_memcpy - function that copies memory area.
 *
 * @dest: pointet
 * @src: unsigned int
 * @n: char
 *
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int con;

	for (con = 0 ; con < n ; con++)
	{
		dest[con] = src[con];
	}

	return (src);



}
