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
	int counter = 0;

	if (array == NULL)
		return (-1);
	while (counter <= (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", counter, array[counter]);
		if (array[counter] == value)
		{
			return (counter);
		}
		counter++;
	}
	return (-1);
}
