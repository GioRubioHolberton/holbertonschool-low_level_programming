#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that frees a listint_t list.
 * @head: Pointer to list
 * @index: index
 * Return: n
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int otrn;
	listint_t *otrh;

	otrn = 0;

	if (*head != NULL)
	{
		otrn = (*head)->n;
		otrh = (*head)->next;
		free(*head);
		*head = otrh;
	}

	return (NULL);
}
