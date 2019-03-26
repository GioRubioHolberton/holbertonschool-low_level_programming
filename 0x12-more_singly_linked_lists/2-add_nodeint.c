#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - function that prints all the elements of a list_t list.
 * @n: list
 * @head: Pointer to 1st node
 * Return: new node or null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
