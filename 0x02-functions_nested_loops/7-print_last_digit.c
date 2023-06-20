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

	if (c < 0)
	{
		c = -c;
	}
	n = c % 10;
	if (n < 0)
	{
		n = -n;
	}
	_putchar (n + '0');
	return (n);
}
