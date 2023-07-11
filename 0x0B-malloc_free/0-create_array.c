#include <stdio.h>
/**
 * create_array - main
 * @s: s
 * @v: v
 * Return: absolute value of @n
 */
char *create_array(unsigned int s, char v)
{
	char *ar;
	int i;

	ar = malloc(sizeof(char) * size);
	if (size == 0 || ar = NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = v;
	}

	return (ar);
}
