#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list_t list.
 * @h: list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int coun;

	for (coun = 0 ; h != NULL ; coun++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (coun);
}
