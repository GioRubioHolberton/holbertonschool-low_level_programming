#include "holberton.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a: pointer
 *
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int star, aux;

	star = 0;
	n--;
	while (star != n && star < n)
	{
		aux = a[n];
		a[n] = a[star];
		a[star] = aux;
		star++;
		n--;
	}
}
