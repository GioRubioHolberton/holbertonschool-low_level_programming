#include "holberton.h"

/**
 * _isupper - function that checks for lowercase character.
 *
 * @c: variable
 *
 * Return: 1 if it's Upper
 */
int _isupper(int c)

{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
