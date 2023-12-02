#include "hash_tables.h"

/**
 * hash_table_print - print table
 * @ht: table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			printf("'%s': ", (ht->array[i])->key);
			if ((ht->array[i])->next == NULL)
				printf("'%s'", (ht->array[i])->value);
			else
				printf("'%s', ", (ht->array[i])->value);
		}
	}
	printf("}\n");
}
