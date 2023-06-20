#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_sign - prints all alphabets.
 * @c: char under test
 * Return: always 0
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
