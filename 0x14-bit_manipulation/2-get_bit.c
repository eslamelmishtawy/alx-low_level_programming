#include "main.h"

/**
 * get_bit - check the code
 * @n: decimal number
 * @index: index
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int l;

	if (index >= n)
	{
		return (-1);
	}
	l = n >> index & 0x01;
	return (l);
}
