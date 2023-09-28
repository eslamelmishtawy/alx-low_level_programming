#include "main.h"

/**
 * get_endianness - check the code
 * Return: Always 0.
 */
int get_endianness(void)
{
	char x = 1;
	char *c;

	c = &x;
	return ((int)*c);

}
