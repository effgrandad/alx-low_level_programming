#include "hash_tables.h"

/**
 * hash_table_print - function to print the key:value from ht
 * @ht: pointer to hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int h = 0;
	hash_node_t  *bucket;
	int not_fin = 0;

	if (!ht)
		return;

	printf("{");
	for (h = 0; h < ht->size; h++)
	{
		bucket = ht->array[h];
		while (bucket)
		{
			if (not_fin)
				printf(", ");
			printf("'%s': '%s'", bucket->key, bucket->value);
			not_fin = 1;
			bucket = bucket->next;
		}
	}
	printf("\n");
}

