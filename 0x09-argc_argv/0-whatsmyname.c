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
	int con = 0;

	for (con = 0 ; con < argc ; con++)
		printf("%s\n", argv[con]);

	return (0);
}
