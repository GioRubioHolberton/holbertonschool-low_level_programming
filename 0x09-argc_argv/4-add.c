#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - Write a program that adds positive numbers.
 *
 *@argc:  int 1
 *@argv: pointer
 *Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int con, iter, x;

	for (con = 1 ; con < argc ; con++)
	{
		for (iter = 0 ; argv[con][iter] != '\0' ; iter++)
		{
			if (!isdigit(argv[con][iter]))
			{
				printf("Error\n");
				return (1);
			}
		}
		x += atoi(argv[con]);
	}
	printf("%d\n", x);

	return (0);
}
