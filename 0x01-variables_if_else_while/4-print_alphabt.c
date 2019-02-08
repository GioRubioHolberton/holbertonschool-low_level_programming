#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - principal funtion
 * Determine the last digit of a number
 * Return: 0
 */
int main(void)
{
	char abc;

	for (abc = 97 ; abc <= 122 ; abc++)
	{
		if (abc != 113 && abc != 101)
			putchar(abc);
	}
	putchar('\n');

	return (0);

}
