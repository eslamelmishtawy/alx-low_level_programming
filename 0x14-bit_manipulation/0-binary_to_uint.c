#include "main.h"

/**
 * get_pow - check the code
 * @x: h
 * @y: j
 * Return: Always 0.
 */

unsigned int get_pow(unsigned int x, unsigned int y)
{
	unsigned int result = 1;

	while (y != 0)
	{
		result *=  x;
		y--;
	}
	return (result);
}

/**
 * binary_to_uint - check the code
 * @b: h
 * Return: Always 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int sum = 0;
	unsigned int counter = 0;

	if (b == NULL)
		return (0);
	while (b[counter] != '\0')
	{
		counter++;
	}
	counter--;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[counter] != '0' && b[counter] != '1')
			return (0);
		sum += (b[counter] - '0') * (get_pow(2, i));
		counter--;
	}
	return (sum);
}
