#include "hash_tables.h"

/**
 * hash_table_print - print table
 * @ht: table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, n = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	for (i = n; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			node = ht->array[i];
			while (node)
			{
				if (n != 0)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				n++;
				node = node->next;
			}
		}
	}
	printf("}\n");
}
