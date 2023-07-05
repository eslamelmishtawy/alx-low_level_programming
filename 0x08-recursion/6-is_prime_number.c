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
	if (j == 1)
		return (1);
	if (i % j == 0 && j > 0)
		return (0);
	return (t(i,j - 1));
}
/**
 * is_prime_number - check the code
 * @n: s
 *
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (t(n, n - 1));
}
