#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that prints all the elements of a list_t list.
 * @h: list
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int coun;

	for (coun = 0 ; h != NULL ; coun++)
	{
		h = h->next;
	}

	return (coun);
}
