#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

/**
 *string_nconcat - Write a program that adds positive numbers.
 *@s1: char
 *@s2: char
 *@n: unsigned int
 *Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *plop;
	unsigned int con1, con2, iter1, iter2;

	con1 = 0;
	con2 = 0;
	iter1 = 0;
	iter2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[con1])
		con1++;
	while (s2[con2])
		con2++;
	if (n >= con2)
		n = con2;

	plop = malloc(sizeof(char) * (con1 + n));

	if (!plop)
		return (NULL);

	while (iter1 < con1)
	{
		plop[iter1] = s1[iter1];
		iter1++;
	}

	while (iter2 < n)
	{
		plop[iter1 + iter2] = s2[iter2];
		iter2++;
	}

	return (plop);
}
