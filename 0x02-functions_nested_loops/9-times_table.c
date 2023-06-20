#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"
/**
 * times_table - prints all alphabets.
 *
 * Return: always 0
 */

void times_table(void)
{
	int i;
	int j;
	int x;
	int y;
	int a;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			x = i - 48;
			y = j - 48;
			a = x * y;
			if (a >= 10)
			{
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				if (y == 9)
				{
					putchar('\n');
				}
				putchar(',');
				putchar(' ');
			}
			else
			{
				putchar(a + '0');
				if (y == 9)
				{
					putchar('\n');
				}
				putchar(',');
				putchar(' ');
				putchar(' ');
			}
		}
	}
}
