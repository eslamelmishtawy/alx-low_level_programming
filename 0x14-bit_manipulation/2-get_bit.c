#include "main.h"

/**
 * get_bit - check the code
 * @n: decimal number
 * @index: index
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 0x01);
}
