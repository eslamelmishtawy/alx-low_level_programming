#include "lists.h"

/**
 * sum_listin - frees listint_t
 * @head: double pointer to the head of the list
 * Return: void
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *newhead;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		newhead = head->next;
		sum = sum + head->n;
		head = newhead;
	}
	return (sum;
}
