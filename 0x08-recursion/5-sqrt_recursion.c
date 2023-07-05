#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * t - check the code
 * @i: s
 * @j: s
 *
 * Return: Always 0.
 */
int t(int i, int j)
{
	if (i - j == 0)
	{
		return (1);
	}
	return (t(i - j, j + 2) + 1);
}
/**
 * _sqrt_recursion - check the code
 * @n: s
 * 
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (t(n, 1));
}
