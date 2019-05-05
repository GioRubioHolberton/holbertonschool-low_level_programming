#include <stdio.h>
#include "lists.h"

/**
 *dlistint_len -  function that returns the number of elements in a linked dlistint_t list.
 *@h: header
 *Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t all = 0;

	while (h != NULL)
	{
		h = h->next;
		all++;
	}
	return (all);
}
