#include "hash_tables.h"

/**
 * hash_table_set - function  adding elements to the hash table
 * @ht: pointer pointing to hash table
 * @key: key to add the element
 * @value: value of added element
 *
 * Return: 1 if it success, 0 upon failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	char *valuecopy, *keycopy;
	hash_node_t  *bucket, *new_node;

	if (!ht || !key || !*key || !value)
		return (0);

	valuecopy = strdup(value);
	if (!valuecopy)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[idx];

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
		{
			free(bucket->value);
			bucket->value = valuecopy;
			return (1);
		}
		bucket = bucket->next;
	}
	new_node = calloc(1, sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(valuecopy);
		return (0);
	}
	keycopy = strdup(key);
	if (!keycopy)
		return (0);
	new_node->key = keycopy;
	new_node->value = valuecopy;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
