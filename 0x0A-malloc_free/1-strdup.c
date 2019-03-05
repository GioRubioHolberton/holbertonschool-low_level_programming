#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

/**
 *_strdup - Write a program that adds positive numbers.
 *
 *@str:  int 1
 *Return: NULL or r
 */
char *_strdup(char *str)
{
	int con, iter;
	char *r;

	con = 0;
	iter = 0;

	if (!str)
		return (NULL);

	if (str == NULL)
		return (NULL);

	while (str[con])
	{
		con++;
	}

	r = malloc(con + 1 * sizeof(char));

	while (iter <= con + 1)
	{
		r[iter] = str[iter];
		iter++;

	}
	return (r);
}
