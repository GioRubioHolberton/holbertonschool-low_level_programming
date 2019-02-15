#include <stdio.h>

/**
 * main - Principal function
 *
 * Return: 0 sucsses
 */
int main(void)

{
	int n;

	for (n = 1 ; n <= 100 ; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
		}

		else if (n % 5 == 0 )
		{
			if (n == 100)
				printf("Buzz");
			else
			{
				printf("Buzz");
				putchar(' ');
			}
		}
		else
			printf("%d ", n);
	}
	putchar ('\n');
	return (0);
}
