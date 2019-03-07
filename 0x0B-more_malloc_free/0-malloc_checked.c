#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

/**
 *malloc_checked - Write a program that adds positive numbers.
 *
 *@b:  unsigned int
 *Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *plop;

	plop = malloc(b);
	if (!plop)
		exit(98);

	return (plop);
}
