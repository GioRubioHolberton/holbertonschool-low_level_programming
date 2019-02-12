#include "holberton.h"

/**
 * print_alphabet - function that prints the alphabet
 *
 * Return: 0 Succsess
 */
void print_alphabet(void)

{
	int abc;

	for (abc = 97 ; abc <= 122 ; abc++)
	{
		_putchar(abc);
	}

	_putchar('\n');
}
