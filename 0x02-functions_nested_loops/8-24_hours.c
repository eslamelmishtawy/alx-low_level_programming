#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <stdlib.h>

/**
 * jack_bauer - prints all alphabets.
 * @c: char under test
 * Return: always 0
 */

void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 48; i < 51; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 54; k++)
			{
				for (l = 48; l < 58; l++)
				{
					putchar(i);
					putchar(j);
					putchar(':');
					putchar(k);
					putchar(l);
					putchar('\n');
				}
			}
		}
	}
}
