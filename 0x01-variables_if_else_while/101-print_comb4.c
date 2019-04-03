#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - principal funtion
 * prints all possible different combinations of three digits
 * Return: 0
 */
#include <stdio.h>

int main(void)
{
	int i, j = 0;

	for (i = 0 ; i <= 999 ; i++)
	{
		j = i % 100;
		if (i / 100 != j / 10 && i / 100 != j % 10 && i / 100 < j / 10 && i / 100 < j % 10 && j / 10 != j % 10 && j / 10 < j % 10)
		{
			putchar(i / 100 + '0');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if (i != 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
