#include "main.h"
#include <stdio.h>
#include <string.h>

int t(int i, int j)
{
	if (i - j == 0)
	{
		return (0);
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
	return (t(n, 1));
}
