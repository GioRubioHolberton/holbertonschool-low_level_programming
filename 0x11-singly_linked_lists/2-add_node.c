#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - function that prints all the elements of a list_t list.
 * @str: list
 * @head: 1st node
 * Return: my nodo in head
 */

list_t *add_node(list_t **head, const char *str)
{
	int coun = 0;

	list_t *my_node;

	my_node = malloc(sizeof(list_t));

	if (my_node == NULL)
	{
		free(my_node);
		return (NULL);
	}

	my_node->str = strdup(str);

	while (str[coun] != '\0')
		coun++;

	my_node->len = coun;
	my_node->next = *head;
	*head = my_node;

	return (*head);
}
