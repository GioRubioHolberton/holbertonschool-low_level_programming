#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: Variable
 *
 */
void print_to_98(int n)
{
	int m;

	if (n < 98)
	{
		for (m = n ; m <= 98 ; m++)
		{
			if (m != 98)
				printf("%d, ", m);
			else
				printf("%d", m);
		}
	}
	else if (n > 98)
	{
		for (n = n ; n >= 98 ; n--)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
		}
	}
	else
	{
		printf("%d", n);
	}
	putchar ('\n');
}
