#include "lists.h"

/**
 * print_dlistint - check the code
 * @dlistint_t: h
 * Return: Always EXIT_SUCCESS.
 */
size_t print_dlistint(const dlistint_t *h);
{
	size_t i;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
