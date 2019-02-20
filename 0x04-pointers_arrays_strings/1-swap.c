#include "holberton.h"

/**
 * swap_int - function that swaps the values of two integers.
 *
 * @a: Pointer
 * @b: Pointer
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
