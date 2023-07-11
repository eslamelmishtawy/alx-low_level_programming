#include <stdlib.h>
#include <string.h>
/**
 * _strdup - main
 * @str: argc
 *
 * Return: absolute value of @n
 */
char *_strdup(char *str)
{
	char *ar;
	int i;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	ar = malloc(sizeof(char) * len);

	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		ar[i] = str[i];
	}
	ar[len] = '\0';

	return (ar);
}
