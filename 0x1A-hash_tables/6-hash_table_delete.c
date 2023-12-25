#include "hash_tables.h"

/**
 * hash_table_delete - hash table and all nodes freed
 * @ht: pointer pointing to hash table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *bucket, *aux_free;
	unsigned long int j = 0;

	if (!ht)
		return;

	for (j = 0; j < ht->size; j++)
	{
		bucket = ht->array[j];
		while (bucket)
		{
			aux_free = bucket;
			bucket = bucket->next;
			if (aux_free->key)
				free(aux_free->key);
			if (aux_free->value)
				free(aux_free->value);
			free(aux_free);
		}
	}
	free(ht->array);
	free(ht);
}

