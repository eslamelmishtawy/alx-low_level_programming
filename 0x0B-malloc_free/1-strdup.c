#include <stdlib.h>
#include <string.h>
/**
 * main - main
 * @str: argc
 *
 * Return: absolute value of @n
 */
char *_strdup(char *str)
{
	char *ar;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	ar = malloc(sizeof(char) * strlen(str));

	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < strlen(str); i++)
	{
		ar[i] = str[i];
	}

	return (ar);
}
