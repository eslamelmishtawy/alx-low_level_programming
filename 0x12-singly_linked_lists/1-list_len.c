#include "lists.h"

/**
 * list_len - check the code
 * @h: h
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
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
