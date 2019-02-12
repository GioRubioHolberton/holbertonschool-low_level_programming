#include "holberton.h"

/**
 * print_alphabet_x10 - function that prints the alphabet
 *
 * Return: 0 Succsess
 */
void print_alphabet_x10(void)

{
	int abc, n;

	for (n = 0 ; n <= 9 ; n++)
	{
		for (abc = 97 ; abc <= 122 ; abc++)
		{
			_putchar(abc);
		}
		_putchar('\n');
	}

}
