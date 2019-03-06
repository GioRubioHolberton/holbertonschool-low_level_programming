#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

/**
 **str_concat - Write a program that adds positive numbers.
 *
 *@s1: char 1
 *@s2: char 2
 *Return: NULL or r
 */
char *str_concat(char *s1, char *s2)
{
	int con, con2, conc, len;
	char *r;

	con = 0;
	con2 = 0;

	while (s1[con])
		con++;

	while (s2[con2])
		con2++;

	len = con + con2;

	r = malloc(len + 1 * sizeof(char));

	if (!r)
		return (NULL);

	for (conc = 0 ; conc <= con ; conc++)
	{
		r[conc] = s1[conc];
	}

	for (conc = con ; conc <= len ; conc++)
	{
		r[conc] = s2[con2];
	}

	/*if (!r)
		return (NULL);

	while (iter <= con)
	{
		r[iter] = str[iter];
		iter++;*/

	return (r);
}
