#include "lists.h"

/**
 * add_nodeint - check the code
 * @h: h
 * Return: Always 0.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *p;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	else
	{
		p = {n, *head->next};
		*head = p;
		return (p);
	}
}
