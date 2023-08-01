#include "lists.h"

/**
 * listint_n - check the code
 * @h: h
 * Return: Always 0.
 */
size_t listint_n(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
