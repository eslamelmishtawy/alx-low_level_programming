#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_square - prints all alphabets.
 * @n: number of line
 * Return: always 0
 */

void print_square(int n)
{
	int j;
	int i;
	if (n == 0)
	{
		putchar('\n');
	}
	for (j = 0; j < n; j++)
	{
		for (i = 0; i < n; i++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
