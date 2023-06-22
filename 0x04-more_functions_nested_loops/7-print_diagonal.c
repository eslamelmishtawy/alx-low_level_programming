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

	if (n <= 0)
	{
		putchar('\n');
		return;
	}

	for (j = 1; j < n + 1; j++)
	{
		i = j;
		putchar('\\');
		putchar('\n');
		if (j == n)
		{
			break;
		}
		while (i--)
		{
			putchar(' ');
		}
	}
}
