#include "lists.h"

/**
 * insert_dnodeint_at_index - check the code
 * @head: h
 * @idx: n
 * @n: n
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t = new;
	
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	while (index > 0)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		index--;
	}
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	(temp->next)->prev = new;
	temp->next = new;

	return (new);
}
