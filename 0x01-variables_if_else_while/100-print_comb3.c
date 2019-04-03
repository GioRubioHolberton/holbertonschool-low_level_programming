#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - principal funtion
 * prints all possible different combinations of two digits
 * Return: 0
 */
#include <stdio.h>

int main(void)
{
	int i;

	for (i = 0 ; i <= 99 ; i++)
	{
		if ((i / 10 != i % 10) && (i / 10 < i % 10))
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			if (i != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
