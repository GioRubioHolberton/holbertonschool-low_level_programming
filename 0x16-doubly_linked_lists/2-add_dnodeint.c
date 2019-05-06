#include <stdio.h>
#include "lists.h"

/**
 *add_dnodeint - function that returns the number of elements in a linked list.
 *@head: header
 *@n: numbers
 *Return: number of elements
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add = malloc(sizeof(dlistint_t));

	if (!add)
		return (add);
	add->n = n;
	add->next = *head;
	add->prev = NULL;
	if (*head != NULL)
		(*head)->prev = add;
	*head = add;
	return (add);
}
