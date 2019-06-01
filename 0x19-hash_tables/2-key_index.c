#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: key
 * @size: size of the array of the hash table
 * Return: index at which the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int my_hash_table;

	my_hash_table = hash_djb2(key) % size;
	return (my_hash_table);
}
