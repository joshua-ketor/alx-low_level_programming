#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table.
 * @size: size of the array
 *
 * Return: A pointer to the newly created hash table
 * NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t *));

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
