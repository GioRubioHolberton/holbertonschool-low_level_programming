#include <stdio.h>
/**
 * main - principal funtion
 * prints the first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned int f = 1, aux = 0, ot = 0;

	for (i = 0 ; i <= 50 ; i++)
	{
		f = f + aux;
		aux = ot;
		ot = f;
		if (i != 0)
		{
			printf("%u", f);
			if (i != 50)
				printf(", ");
		}
	}
	printf("\n");
	return (0);
}
