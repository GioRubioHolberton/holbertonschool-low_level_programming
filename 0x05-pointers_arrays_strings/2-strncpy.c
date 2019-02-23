#include "holberton.h"
/**
  * *_strncpy - function that prints a string, followed by a new line.
  *
  * @dest: pointer
  * @src: pointer
  * @n: size of src
  *
  *Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);

}
