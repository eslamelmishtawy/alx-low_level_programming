#include "lists.h"

/**
 * print_listint - check the code
 * @h: h
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h)
	{
		printf("%d\n",  h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
