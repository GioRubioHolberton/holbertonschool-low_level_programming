#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

/**
 *array_range - Write a program that adds positive numbers.
 *
 *@min: int
 *@max: int
 *Return: pointer
 */

int *array_range(int min, int max)
{
	int *plop;
	int space, con = 0;

	if (min > max)
		return (NULL);

	space = (max + 1) - min;

	plop = malloc(sizeof(int) * space);

	if (!plop)
		return (NULL);

	while (con < space)
	{
		plop[con] = min;
		con++;
		min++;
	}

	return (plop);
}
