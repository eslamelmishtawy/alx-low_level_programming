#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * factorial - check the code
 * @n: s
 *
 * Return: Always 0.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
