#include "holberton.h"
/**
  * *_strncat - function that prints a string, followed by a new line.
  *
  * @dest: pointer
  * @src: pointer
  * @n: size of src
  *
  *Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{

	int l, m;

	for (m = 0 ; *(dest + m) != '\0' ; m++)
	{
	}

	for (l = 0 ; *(src + l) != '\0' && l < n ; l++)
	{
		dest[m + l] = src[l];
	}
	dest[l + m] = '\0';
	return (dest);

}
