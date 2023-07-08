#include "hash_tables.h"

/**
 * hash_table_create - allocate memory for hash table
 * @size: The size of the array
 * Return: hash_table_t address or NULL if something wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *new_hash_table;
	unsigned int i;

	if (size == 0)
		return (NULL);

	new_hash_table = malloc(sizeof(hash_table_t *));
	if (!new_hash_table)
		return (NULL);

	new_hash_table->size = size;
	new_hash_table->array = malloc(sizeof(hash_node_t *) * (size + 1));

	if (!new_hash_table->array)
	{
		free(new_hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_hash_table->array[i] = NULL;
	return (new_hash_table);
}
