#include <stdio.h>
#include "lists.h"

/**
 *free_dlistint - function that free a dlistint_t list.
 *@head: header
 *Return: head
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		free_dlistint((*head).next);
		free(head);
	}
}
