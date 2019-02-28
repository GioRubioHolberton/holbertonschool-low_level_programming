#include "holberton.h"
/**
 * factorial - function that copies memory area.
 *
 * @n: var
 *
 * Return: < 0 = -1; = 0 = 1, n * factorial(n - 1)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));
}
