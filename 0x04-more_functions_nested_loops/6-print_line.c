#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_line - prints all alphabets.
 * @n: number of line
 * Return: always 0
 */

void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		putchar('_');
	}
	putchar('\n');
}
