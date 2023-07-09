#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: pointer to hash table to be deleted.
 * Return: No return.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *crrnt = NULL;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			while (ht->array[i])
			{
				crrnt = ht->array[i];
				free(crrnt->key);
				free(crrnt->value);
				ht->array[i] = ht->array[i]->next;
				free(crrnt);
			}
		}
	}
	free(ht->array);
	free(ht);
}
