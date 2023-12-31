#include "lists.h"

/**
 * add_node_end - check the code
 * @head: h
 * @str: s
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);

	while (str)
	{
		len++;
	}
	new->len = len;
	new->next = NULL;
	*head = new;

	return (new);
}
