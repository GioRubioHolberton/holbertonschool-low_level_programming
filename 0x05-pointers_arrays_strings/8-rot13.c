#include "holberton.h"
/**
 * *rot13 - function that encodes a string using rot13.
 *
 * @s: pointer
 *
 *Return: dest
 */
char *rot13(char *s)
{
	char normal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char change[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int cont = 0, iter;

	while (s[cont])
	{
		iter = 0;
		while (normal[iter])
		{
			if (s[cont] == normal[iter])
			{
				s[cont] = change[iter];
				break;
			}
			iter++;
		}
		cont++;
	}
	return (s);
}
