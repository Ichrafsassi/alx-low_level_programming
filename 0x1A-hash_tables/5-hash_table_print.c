#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash_table
 * @ht: Pointer to the hash_table
 * Return: f ht is NULL, don’t print anything
 */
void hash_table_print(const hash_table_t *ht)
{
	int flag = 0;
	unsigned long int i;
	hash_node_t *crrnt;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{

		if (ht->array[i])
		{
			crrnt = ht->array[i];

			while (crrnt)
			{
				if (flag)
					printf(", ");

				printf("'%s': '%s'", crrnt->key, crrnt->value);
				crrnt = crrnt->next;
				flag = 1;
			}
		}
	}

	printf("}\n");
}
