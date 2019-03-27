#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - function that frees a listint_t list.
 *
 * @head: Pointer to list
 * Return: n
 */

int pop_listint(listint_t **head)
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

	return (otrn);
}
