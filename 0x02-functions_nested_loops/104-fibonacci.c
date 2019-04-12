#include <stdio.h>
/**
 * main - principal funtion
 * prints the first 98 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int i;
	long unsigned int f = 1, aux = 0, ot = 0;

	for (i = 0 ; i <= 98 ; i++)
	{
		f = f + aux;
		aux = ot;
		ot = f;
		if (i != 0)
		{
			printf("%lu", f);
			if (i != 98)
				printf(", ");
		}
	}
	printf("\n");
	return (0);
}
