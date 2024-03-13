#include "search_algos.h"

/**
 * linear_search - check the code
 * @array: pinter to array
 * @size: size of array
 * @value: value
 * Return: Always 0.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t counter = 0;

	while (counter <= size)
	{
		printf("Value checked array[%d] = [%d]", counter, array);
		if (array == value)
		{
			printf("Found %d at index: %d", value, counter);
		}
		counter++;
		array++;
	}
	return (-1);
}
