#include <stdio.h>
#include "lists.h"

/**
 *sum_dlistint - returns the sum of all the data (n) of linked list.
 *@head: header
 *Return: sum of all thee data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
