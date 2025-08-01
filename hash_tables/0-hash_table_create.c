#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - crea una tabla hash
 * @size: el tamaño de la matriz
 *
 * Return: puntero a la nueva tabla hash, o NULL si falla
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;

	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)

	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
