#include "main.h"

/**
 * swap_int - reset value on n to 98
 * @a: pointer to value of n
 * @b: b
 *
 * Retrun: return n
 */
void swap_int(int *a, int *b)
{
	int t;

	t = &a;
	*a = *b;
	*b = *t;
}
