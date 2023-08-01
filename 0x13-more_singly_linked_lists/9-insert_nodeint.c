#include "lists.h"

/**
 * insert_nodeint_at_index - check the code
 * @head: h
 * @idx: ss
 * @n: n
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *p;
	listint_t *node;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	else
	{
		node = get_nodeint_at_index(*head, idx);
		if (node == NULL)
			return (NULL);
		p->n = n;
		p->next = node->next;
		node->next = p;
		return (p);
	}
}
