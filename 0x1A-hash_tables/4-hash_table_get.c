#include "hash_tables.h"

/**
 * hash_table_get - get value of a key in a hash table.
 * @ht: pointer to the hash table
 * @key: key of the node to update
 * Return: string value on success, NULL on failure
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
        hash_node_t *crrnt;
        unsigned long int keyindex;
        
        if (ht == NULL || key == NULL || key[0] == '\0' || ht->size == 0)
                return (NULL);

        keyindex = key_index((unsigned char *)key, ht->size);

        if (ht->array[keyindex] == NULL)
                return (NULL);

        crrnt = ht->array[keyindex];

        while (crrnt)
        {
                if (strcmp(crrnt->key, key) == 0)
                        return (crrnt->value);
                crrnt = crrnt->next;
        }
        return (NULL);
}
