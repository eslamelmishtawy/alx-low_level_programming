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

	if (n > 98)
	{
		for (i = n; i > 97; i--)
		{
			printf("%d", i);
			if (i == 98)
			{
				putchar('\n');
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	else
	{
		for (i = n; i < 99; i++)
		{
			printf("%d", i);
			if (i == 98)
			{
				putchar('\n');
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
}
