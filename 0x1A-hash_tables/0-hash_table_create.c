#include "hash_tables.h"

/**
 * hash_table_create - Creates a hashtable function
 * @size: Size of table to be created
 * Return: A pointer to hashtable
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t) * size);

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = NULL;
	return (table);
}
