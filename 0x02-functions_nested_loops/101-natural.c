#include <stdio.h>
/**
 * main - principal funtion
 * The sum of these multiples is 1024
 * Return: 0
 */
int main(void)
{
	int n, a;

	for (n = 1 ; n < 1024 ; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			a = n + a;
		}
	}
	printf("%d\n", a);
	return (0);
}
