#include "main.h"

/**
 * flip_bits - check the code
 * @n: decimal number
 * @m: index
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int counter = 0;

	while (x)
	{
		x = x & (x - 1);
		counter++;
	}
	return (counter);
}
