#include "main.h"

/**
 * _puts - reset value on n to 98
 * @a: pointer to value of n
 *
 * Return: return n
 */
void _puts(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		putchar(a[i] + '0');
		i++;
	}
	putchar('\n');
}
