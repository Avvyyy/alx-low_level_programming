#include "hash_tables.h"

/**
 *hash_table_create - Function that creates a hash table.
 * @size: Size of the array
 *
 *Return: pointer to the newly created hash table
 *else NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *new_hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (!new_hash_table)
		return (NULL);

	new_hash_table->size = size;
	new_hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (!new_hash_table->array)
	{
		free(new_hash_table->array);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_hash_table->array[i] = NULL;

	return (new_hash_table);
}
