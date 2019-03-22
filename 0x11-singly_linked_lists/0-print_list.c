#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int coun;

	for (coun = 0 ; h != NULL ; coun++)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] %p\n", h->str);

		h = h->next;

	}

	return (coun);
}
