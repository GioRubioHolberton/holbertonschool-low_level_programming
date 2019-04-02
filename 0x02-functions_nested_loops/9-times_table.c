#include <stdio.h>
#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 *
 * Return: 0
 */
void times_table(void)
{
	int i, j, r;
	
	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			r = j * i;
			if (j != 9)
			{
				if (j != 0)
					printf("%2d, ", r);
				else
					printf("%d, ", r);
			}
			else
				printf("%2d ", r);
		}
		putchar('\n');
	}
}
