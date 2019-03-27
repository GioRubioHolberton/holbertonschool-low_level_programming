#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 *
 * @head: Pointer to 1st node
 */

void free_listint2(listint_t **head)
{
	listint_t *otr;

	if (head != NULL)
		return;
	while (*head != NULL)
	{
		otr = *head;
		free(otr);
		*head = otr;
	}
}
