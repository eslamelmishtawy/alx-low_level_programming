#include "lists.h"

/**
 * get_dnodeint_at_index - check the code
 * @head: h
 * @indexn: n
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	if (head == NULL)
		return (NULL);

	while (head->next != NULL && index > 0)
	{
		head = head->next;
		index--;
	}
	return (head);
}
