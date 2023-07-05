#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - check the code
 * @s: s
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		i++;
	}
	return i;
}
