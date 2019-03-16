#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - name funtion
 * @n: total number variable arguments passed.
 * Return: 0 or sum
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	int total = 0;
	unsigned int con;

	if (n == 0)
		return (0);

	va_start(sum, n);

	for (con = 0 ; con < n ; con++)
	{
		total += va_arg(sum, int);
	}

	va_end(sum);

	return (total);
}
