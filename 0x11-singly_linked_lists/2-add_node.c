#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: list
 *
 * Return: the number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	int coun;

	list_t *my_node;

	my_node = malloc(sizeof(list_t));

	if (my_node == NULL)
		return (NULL);

	my_node->str = strdup(str);

	if (my_node->str == NULL)
		free(my_node);
		return (NULL);

	for (coun = 0 ; my_node->str != '\0' ; coun++)
	{
	}

	my_node->len = coun;
	my_node->next = *head;
	my_node = *head;

	return (my_node);
}
