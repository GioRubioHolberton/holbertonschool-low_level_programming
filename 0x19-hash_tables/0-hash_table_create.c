#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: is the size of the array
 * Return: a new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_hash_table;
	unsigned long int cont;

	my_hash_table = malloc(sizeof(hash_table_t));
	if (my_hash_table == NULL)
		return (NULL);

	my_hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (my_hash_table->array == NULL)
		return (NULL);

	for (cont = 0; cont < size; cont++)
		my_hash_table->array[cont] = NULL;

	my_hash_table->size = size;
	return (my_hash_table);

}
