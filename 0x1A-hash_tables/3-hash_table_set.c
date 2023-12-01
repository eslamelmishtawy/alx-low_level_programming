#include "hash_tables.h"

/**
 * hash_table_set - table
 * @ht: table
 * @key: key
 * @value: value
 * Return: 0 or 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_item;
	hash_node_t *current_item;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	current_item = ht->array[index];
	while (current_item != NULL)
	{
		if (strcmp(current_item->key, key) == 0)
		{
			if (strcmp(current_item->value, value) != 0)
			{
				free(current_item->value);
				current_item->value = strdup(value);
			}
		return (1);
		}
		current_item = current_item->next;
	}
	new_item = create_item(key, value);
	if (new_item == NULL)
		return (0);
	new_item->next = ht->array[index];
	ht->array[index] = new_item;
	return (1);


}
/**
 * create_item - create node
 * @key: key
 * @value: value
 *
 * Return: Node
 */
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *new_item;

	if (key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (NULL);
	new_item = malloc(sizeof(hash_node_t));
	if (new_item == NULL)
		return (NULL);

	new_item->key = strdup(key);
	if (new_item->key == NULL)
	{
		free(new_item);
		return (NULL);
	}

	new_item->value = strdup(value);
	if (new_item->value == NULL)
	{
		free(new_item->key);
		free(new_item);
		return (NULL);
	}
	new_item->next = NULL;
	return (new_item);

}
