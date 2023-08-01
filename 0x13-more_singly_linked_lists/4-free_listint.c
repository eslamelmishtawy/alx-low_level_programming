#include "lists.h"

/**
 * free_listint - check the code
 * @head: h
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{

	listint_t *firstnode;
	while (head)
	{
		firstnode = head;
		head = head->next;
		free(firstnode);
	}
}
