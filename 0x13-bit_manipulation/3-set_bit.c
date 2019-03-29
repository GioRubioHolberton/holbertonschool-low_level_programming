#include <stdio.h>
#include "holberton.h"

/**
 * set_bit - function that sets the value of a bit to 1
 * @n: number
 * @index: index
 * Return: 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value = 1;

	if (index > 32)
		return (-1);

	value = (value << index);

	*n = *n | value;
	return (1);

}
