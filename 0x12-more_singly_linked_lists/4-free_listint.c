#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 *
 * @head: Pointer to 1st node
 */

void free_listint(listint_t *head)
{
	listint_t *otr;

	while (head != NULL)
	{
		otr = head->next;
		free(head);
		head = otr;
	}
}
