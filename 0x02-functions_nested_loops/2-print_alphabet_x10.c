#include <stdio.h>

/**
 * print_alphabet - prints all alphabets.
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			putchar(a[i]);
		}
		putchar('\n');
	}
}
