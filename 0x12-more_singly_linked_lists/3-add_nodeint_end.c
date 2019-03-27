#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node.
 * @n: list
 * @head: Pointer to 1st node
 * Return: adress of the new node or null
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *otr;

	otr = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		while (otr->next != NULL)
			otr = otr->next;

		otr->next = new_node;
	}

	return (new_node);
}
