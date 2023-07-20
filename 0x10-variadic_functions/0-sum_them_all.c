#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum;
	va_list ptr;

	if (n == 0)
	{
		return (0);
	}

	sum = 0;
	va_start(ptr, n);
	for (i = 0; i < n - 1; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
