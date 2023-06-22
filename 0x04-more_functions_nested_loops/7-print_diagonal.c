#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_diagonal - prints all alphabets.
 * @n: number of line
 * Return: always 0
 */

void print_diagonal(int n)
{
	int j;
	int i;

	for (j = 0; j < n - 1; j++)
	{
		i = j + 1;
		putchar('\\');
		putchar('\n');
		while (i--)
		{
			putchar(' ');
		}
	}
	if (n == 0)
	{
		putchar('\n');
	}
}
