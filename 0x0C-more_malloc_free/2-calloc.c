#include "main.h"

/**
 * _calloc - main
 * @nmemb: s
 * size : s
 *
 * Return: absolute value of @n
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ar;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ar = malloc(size * nmemb);
	if (ar == NULL)
	{
		return (NULL);
	}
	return (ar);
}
