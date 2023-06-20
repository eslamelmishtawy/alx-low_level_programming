#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * print_to_98 - prints all alphabets.
 * @n: first number
 * Return: always 0
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; i++)
	{
		if (i >= 10)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
		}
		else
		{
			putchar(i + '0');
		}
		if (i == 98)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
}
