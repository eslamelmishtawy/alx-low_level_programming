#include "lists.h"

/**
 * get_nodeint_at_index - frees listint_t
 * @head: double pointer to the head of the list
 * @index: index
 * Return: void
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *newhead;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	while (head != NULL)
	{
		newhead = head->next;
		n++;
		if (n == index)
			return (newhead);
		head = newhead;
	}
	return (NULL);
}
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
		node = get_nodeint_at_index(*head, idx - 1);
		if (node == NULL)
			return (NULL);
		p->n = n;
		p->next = node->next;
		node->next = p;
		free(node);
		return (p);
	}
}
