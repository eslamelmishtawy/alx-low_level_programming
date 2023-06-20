#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints all alphabets.
 * @c: char under test
 * Return: always 0
 */

int print_last_digit(int c)
{
	int n;

	n = (abs(c) % 10);
	n = n + (n * 10);
	if (c < 0)
	{
		return (-1 * n);
	}
	return (n);
}
