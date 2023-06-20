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
	if (c < 0)
	{
		return (-1 * (abs(c) % 10 + (abs(c) % 10) * 10))
	}
	return ((c % 10) + ((c % 10) * 10));
}
