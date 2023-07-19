#include "function_pointers.h"

/**
 * array_iterator - prints a name as is
 * @array: name of the person
 * @size: function
 * @action: function
 *
 * Return: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
