#include "hash_tables.h"
#include <stdio.h>
#include <string.h>

/**
 * hash_table_print - Prints a hash table.
 * @ht: Pointer to the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int printed = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (printed)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			printed = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
