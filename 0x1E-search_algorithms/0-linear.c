#include "search_algos.h"
/**
 *linear_search - function that searches for a value in an array of integers
 *@array: pointer to the first element of the array to search
 *@size: number of elements in array
 *@value: If value is not present in array or if array is NULL, return -1
 *Return: -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t cont = 0;

	if (array == NULL)
		return (-1);
	while (cont < size)
	{
		printf("Value checked array[%lu] = [%d]\n", cont, *(array + cont));
		if (*(array + cont) == value)
			return (cont);
		cont++;
	}
	return (-1);
}
