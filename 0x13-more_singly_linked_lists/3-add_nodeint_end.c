#include "lists.h"

/**
 * add_nodeint_end - check the code
 * @head: h
 * @n: ss
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
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
		p->n = n;
		p->next	= NULL;
		if (!*head)
		{
			*head = p;
			return (p);
		}
		*head->next = p;
		return (p);
	}
}
