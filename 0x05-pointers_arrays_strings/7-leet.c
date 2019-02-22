#include "holberton.h"
/**
  * *leet - function that encodes a string into 1337.
  *
  * @s: pointer
  *
  *Return: dest
  */
char *leet(char *s)
{
	char lower[] = "aeotl";
	char upper[] = "AEOTL";
	char number[] = "43071";
	int cont = 0, iter;

	while (s[cont])
	{
		iter = 0;
		while (lower[iter])
		{
			if (s[cont] == lower[iter] || s[cont] == upper[iter])
			{
				s[cont] = number[iter];
			}
			iter++;
		}
		cont++;
	}
	return (s);
}
