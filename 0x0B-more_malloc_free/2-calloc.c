#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

/**
 *_calloc - Write a program that adds positive numbers.
 *
 *@nmemb: unsigned int
 *@size: unsigned int
 *Return: *_calloc
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *plop;
	unsigned int con = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);


	plop = malloc(size * nmemb);

	if (!plop)
		return (NULL);

	while (con < nmemb)
	{
		plop[con] = 0;
		con++;
	}

	return (plop);
}
