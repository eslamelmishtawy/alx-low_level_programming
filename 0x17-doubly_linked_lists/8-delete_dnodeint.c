#include "lists.h"

/**
 * delete_dnodeint_at_index - check the code
 * @head: h
 * @index: n
 * Return: Always EXIT_SUCCESS.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);
	while (idx > 0)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		idx--;
	}

	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}
