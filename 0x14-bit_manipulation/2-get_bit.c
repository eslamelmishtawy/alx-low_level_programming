#include "main.h"

/**
 * get_bit - check the code
 * @n: decimal number
 * @index: index
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int k = 0x01;

	k = k << index;
	if (k == 0)
		return (-1);
	if ((n & k))
		return (1);
	else
		return (0);
}
