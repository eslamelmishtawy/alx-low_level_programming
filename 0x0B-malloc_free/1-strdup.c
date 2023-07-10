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

	if (str == NULL)
	{
		return (NULL);
	}
	ar = malloc(sizeof(char) * strlen(str));

	return (ar);
}
