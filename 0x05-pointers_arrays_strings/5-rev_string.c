#include <string.h>
#include "main.h"
/**
 * rev_string - reset value on n to 98
 * @a: pointer to value of n
 *
 * Return: return n
 */
void rev_string(char *a)
{
	int i;

	i = strlen(a) - 1;
	while (i >= 0)
	{
		putchar(a[i]);
		i--;
	}
	putchar('\n');
}
