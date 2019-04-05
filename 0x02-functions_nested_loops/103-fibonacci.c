#include <stdio.h>
/**
 * main - principal funtion
 * prints the sum of the even-valued terms
 * Return: 0
 */
int main(void)
{
	int i;
	long int f = 1, aux = 0, ot = 0, sum = 0;

	for (i = 0 ; f <= 4000000 ; i++)
	{
		if (f % 2 == 0)
		{
			sum = sum + f;
		}
		f = f + aux;
		aux = ot;
		ot = f;
	}
	printf("%ld\n", sum);
	return (0);
}
