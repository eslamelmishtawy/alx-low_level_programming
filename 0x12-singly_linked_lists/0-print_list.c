#include "lists.h"

/**
 * print_list - check the code
 * @h: h
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%d] nil\n", 0);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		nodes++;
		h = h->next;
	}
	return (nodes);
}
