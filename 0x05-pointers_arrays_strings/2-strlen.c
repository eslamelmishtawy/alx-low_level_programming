#include "main.h"

/**
 * _strlen - reset value on n to 98
 * @a: pointer to value of n
 *
 * Retrun: return n
 */
int _strlen(char *a)
{
	int i;

	i = 0;
	while(a[i] != '\0')
	{
		i++;
	}
	return (i);
}
