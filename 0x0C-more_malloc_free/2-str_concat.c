#include <stdlib.h>
#include <string.h>
/**
 * str_concat - main
 * @s1: argc
 * @s2: s2
 * Return: absolute value of @n
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;
	int i;
	int s1_len = 0;
	int s2_len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		s1_len++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		s2_len++;
	}
	ar = malloc(sizeof(char) * (s1_len + s2_len + 1));

	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1_len; i++)
	{
		ar[i] = s1[i];
	}
	for (i = 0; i < s2_len; i++)
	{
		ar[s1_len + i] = s2[i];
	}
	ar[s1_len + s2_len] = '\0';

	return (ar);
}
