#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * print_to_98 - prints all alphabets.
 * @i: first number
 * Return: always 0
 */
void print_to_98(int i)
{
	if (i == 98)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar('\n');
	}
	while (i != 98)
	{
		if (i >= 10)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
		}
		else if (i >= 100)
		{
			printf("%d", i);
		}
		else
		{
			putchar(i + '0');
		}
		if (i == 98)
		{
			printf("%d", i);
			putchar('\n');
			break;
		}
		putchar(',');
		putchar(' ');
		if (i > 98)
		{
			i--;
		}
		else
		{
			i++;
		}
	}
}
