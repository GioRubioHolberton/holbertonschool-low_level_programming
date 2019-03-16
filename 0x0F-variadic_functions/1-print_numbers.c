#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - name funtion
 * @separator: const char (, ).
 * @n: number of arguments.
 * Return: 0 or sum
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int con;

	va_start(print, n);

	if (n != 0)
	{
		for (con = 0 ; con < n ; con++)
		{
			if (separator != NULL)
			{
				if (con < n - 1)
				{
					printf("%d%s", va_arg(print, int), separator);
				}
				else
					printf("%d", va_arg(print, int));
			}
			else
				printf("%d", va_arg(print, int));
		}
	}
	printf("\n");

	va_end(print);
}
