#include "holberton.h"

/**
 * _isalpha - function that checks for lowercase character.
 *
 * @c: variable
 *
 * Return: 1 if it's Lower
 */
int _isalpha(int c)

{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);

	else
		return (0);
}
