#include <stdio.h>

/**
 *main - Write a program that prints all arguments it receives.
 *
 *@argc:  int 1
 *@argv: pointer
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int con;

	for (con = 0 ; con < argc ; con++)
		printf("%s\n", argv[con]);

	return (0);
}
