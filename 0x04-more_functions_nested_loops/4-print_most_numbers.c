#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_most_numbers - prints all alphabets.
 * Return: always 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		putchar(i + '0');
	}
	putchar('\n');
}
