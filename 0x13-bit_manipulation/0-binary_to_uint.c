#include <stdio.h>
#include "holberton.h"

/**
 * binary_to_uint - function that prints all the elements of a list_t list.
 * @h: list
 *
 * Return: the number of nodes
 */

unsigned int binary_to_uint(const char *b)
{
	int coun, num = 0;

	if (b == NULL)
		return (0);

	for (coun = 0 ; b[coun] != '\0' ; coun++)
		{
			if (b[coun] != '0' && b[coun] != '1')
				return (0);
		num = num << 1;
		num = num | (b[coun] - '0');
	}

	return (num);
}
