#include <stdlib.h>
/**
 * create_array - main
 * @s: s
 * @v: v
 * Return: absolute value of @n
 */
char *create_array(unsigned int s, char v)
{
	char *ar;
	unsigned int i;

	ar = malloc(sizeof(char) * s);
	if (s == 0 || ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s; i++)
	{
		ar[i] = v;
	}

	return (ar);
}
