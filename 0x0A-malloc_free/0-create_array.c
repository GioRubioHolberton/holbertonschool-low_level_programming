#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

/**
 *create_array - Write a program that adds positive numbers.
 *
 *@size:  int 1
 *@c: pointer
 *Return: NULL or c
 */

char *create_array(unsigned int size, char c)
{
	unsigned int con;
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (con = 0 ; con < size ; con++)
	{
		a[con] = c;
	}
	return (a);
}
