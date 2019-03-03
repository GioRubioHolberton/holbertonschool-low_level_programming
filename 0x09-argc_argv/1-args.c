#include <stdio.h>

/**
 *main - Print with puts funtion
 *
 *@argc:  int 1
 *@argv: pointer
 *Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
