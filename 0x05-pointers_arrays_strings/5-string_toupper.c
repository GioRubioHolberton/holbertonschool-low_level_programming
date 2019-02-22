#include "holberton.h"
/**
 * *string_toupper - function that changes all lowercase to uppercase.
 *
 * @s: pointer
 *
 *Return: dest
 */
char *string_toupper(char *s)
{
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int cont = 0, iter;

	while (s[cont])
	{
		iter = 0;
		while (lower[iter])
		{
			if (s[cont] == lower[iter])
			{
				s[cont] = upper[iter];
			}
			iter++;
		}
		cont++;
	}
	return (s);
}
