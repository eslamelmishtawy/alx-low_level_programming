#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * more_numbers - prints all alphabets.
 * Return: always 0
 */

void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				putchar(i / 10 + '0');
			}
			putchar(i % 10 + '0');
		}
		putchar('\n');
	}
}
