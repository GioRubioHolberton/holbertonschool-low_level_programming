#include "holberton.h"

/**
 *
 * rev_string - function that reverses a string.
 *
 */
void rev_string(char *s)
{
	int star, end, aux;

	star = 0;
	end = 0;
	while (*(s + end))
	{
		end++;
	}

	end--;

	while (star != end || star < end)
	{
		aux = s[end];
		s[end] = s[star];
		s[star] = aux;
		star++;
		end--;
	}

}
