#include <stdio.h>
/**
 * main - principal funtion
 * prints the first 98 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int i;
	float x, z = 0, f = 1;

	for (i = 1 ; i <= 98 ; i++)
	{
		x = z;
		z = f;
		f += x;
		printf("%0.f", f);
		if (i != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
