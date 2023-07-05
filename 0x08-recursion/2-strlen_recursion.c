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
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
