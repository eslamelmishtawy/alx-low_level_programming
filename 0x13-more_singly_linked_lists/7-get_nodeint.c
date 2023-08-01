#include "lists.h"

/**
 * get_nodeint_at_index - frees listint_t
 * @head: double pointer to the head of the list
 * @index: index
 * Return: void
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;
	listint_t *newhead;

	if (head == NULL)
		return (NULL);
	if (index == 0)
	{
		return (head);
	}
	while (head != NULL)
	{	
		newhead = head->next;
		n++;
		if (n == index)
		{
			return (newhead);
		}
		head = newhead;
	}
	return (NULL);
}
