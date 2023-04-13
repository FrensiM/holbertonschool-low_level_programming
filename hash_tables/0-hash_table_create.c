#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * *hash_table_create - func that create hash table
 * @size: size of array 
 * Return: return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash = malloc(sizeof(hash_table_t));
	
	if (hash == NULL)
		return (NULL);
	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) * size);

	if (hash->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		hash->array[i] = NULL;
	return (NULL);
}
