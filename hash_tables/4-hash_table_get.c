#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_get - fun that take table
 * @ht: table
 * @key: strint
 * Return: return the index
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;

	if (key == NULL || ht == NULL)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx] == NULL)
		return (NULL);
	if (ht->array[idx]->key != key)
	{
		while (ht->array[idx]->next != NULL)
			ht->array[idx] = ht->array[idx]->next;
	}
	return (ht->array[idx]->value);
}
