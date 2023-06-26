#include <string.h>
#include "main.h"
/**
 * print_rev - reset value on n to 98
 * @a: pointer to value of n
 *
 * Return: return n
 */
void print_rev(char *a)
{
	int i;

	i = strlen(a) - 1;
	while (i == 0)
	{
		putchar(a[i]);
		i--;
	}
	putchar('\n');
}
