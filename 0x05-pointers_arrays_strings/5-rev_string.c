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
	int len;
	char tmp;
	int len1;

	len1 = 0;
	len = 0;
	while (a[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;
	for (i = 0; i < len / 2; i++)
	{
		tmp = a[i];
		a[i] = a[len1];
		a[len1--] = tmp;
	}
}
