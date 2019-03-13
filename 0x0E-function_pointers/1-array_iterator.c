#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - prints a name as is
 * @array: array
 * @size: size of array
 * @action: pointer funtion
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t coun;

	if (action)
		for (coun = 0 ; coun < size ; coun++)
		{
			(*action)(array[coun]);
		}
}
