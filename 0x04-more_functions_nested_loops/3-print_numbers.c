#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_numbers - prints all alphabets.
 * @a: char under test
 * @c: char under test
 * Return: always 0
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
}
