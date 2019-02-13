#include "holberton.h"

/**
 * _abs - prints the sign of a number.
 *
 * @n: variable
 *
 * Return: 1 if it's positive
 */
int _abs(int n)

{
	if (n < 0)
		n = n * -1;
	return (n);
}
