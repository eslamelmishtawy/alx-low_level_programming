#include "main.h"

/**
 * get_endianness - check the code
 * Return: Always 0.
 */
int get_endianness(void);
{
	int x = 1;
	char *c;

	c = &1;
	return ((int)*c);

}
