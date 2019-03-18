#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - name funtion
 * @separator: const char (, ).
 * @n: number of arguments.
 * Return: 0 or print
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int con;
	char *strings;

	va_start(print, n);

	if (n != 0)
	{
		for (con = 0 ; con < n ; con++)
		{
			strings = va_arg(print, char *);

			if (separator != NULL)
			{
				if (con < n - 1)
				{
					printf("%s%s", strings, separator);
				}
				else
					printf("%s", strings);
			}
			else
				printf("%p", strings);
		}
	}
	printf("\n");

	va_end(print);
}
