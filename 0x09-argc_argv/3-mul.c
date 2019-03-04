#include <stdio.h>
#include <stdlib.h>

/**
 *main - Write a program that multiplies two numbers.
 *
 *@argc:  int 1
 *@argv: pointer
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int con, x = 1;

	if (argc > 1)
	{
		for (con = 1 ; con < argc ; con++)
		{
			x *= atoi(argv[con]);
		}
		printf("%d\n", x);
	}

	return (0);
}
