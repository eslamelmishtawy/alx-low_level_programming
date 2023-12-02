#include "hash_tables.h"

/**
 * hash_table_delete - print table
 * @ht: table
 */
void hash_table_delete(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			node = ht->array[i];
			while (node)
			{
				free(node->key);
				free(node->value);
				node = node->next;
				free(ht->array[i])
			}
		}
	}
}
