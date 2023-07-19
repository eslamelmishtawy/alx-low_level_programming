#include "function_pointers.h"

/**
 * int_index - prints a name as is
 * @array: name of the person
 * @size: function
 * @cmp: function
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;

	if (!array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
				return (i);
	return (-1);
}
