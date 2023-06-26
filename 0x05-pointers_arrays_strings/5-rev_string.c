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

	len = strlen(a) - 1;
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len--] = tmp;
	}
}
