#include "lists.h"

/**
 * pop_listint - frees listint_t
 * @head: double pointer to the head of the list
 * Return: void
 */
int pop_listint(listint_t **head)
{
	listint_t *newhead;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	newhead = (*head)->next;
	free(*head);
	*head = newhead;
	return (n);
}
