#include "holberton.h"

/**
 * _islower - function that checks for lowercase character.
 *
 * @c: variable
 *
 * Return: 1 if it's Lower
 */
int _islower(int c)

{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
