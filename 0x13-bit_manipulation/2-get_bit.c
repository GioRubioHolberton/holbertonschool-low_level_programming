#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: string
 * @index: index
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 32)
		return (-1);

	value = (n >> index) & 1;
	return (value);

}
