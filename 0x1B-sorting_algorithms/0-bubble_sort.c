#include "sort.h"

/**
 * bubble_sort - bubble sort method
 * @array: array
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t x = 0, y, aux;

	if (array == NULL)
		return;

	while (x < size - 1)
	{
		y = 0;
		while (y < (size - x) - 1)
		{
			if (array[y] > array[y + 1])
			{
				aux = array[y];
				array[y] = array[y + 1];
				array[y + 1] = aux;
				print_array(array, size);
			}
			y++;
		}
		x++;
	}
}
