#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - prints a name as is
 * @array: array
 * @size: size of array
 * @cmp: pointer funtion
 * Return: cmp or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int coun;

	if (size <= 0)
		return (-1);

	if (!array)
		return (-1);

	if (!cmp)
		return (-1);

	for (coun = 0; coun < size; coun++)
	{
		if ((*cmp)(array[coun]))
			return (coun);
	}

	return (-1);
}
