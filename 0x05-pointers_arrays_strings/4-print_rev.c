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

	i = _strlen(a);
	while (a[i] != '\0')
	{
		putchar(a[i]);
		i--;
	}
	putchar('\n');
}
