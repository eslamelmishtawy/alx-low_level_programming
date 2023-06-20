#include <stdio.h>

/**
 * print_alphabet - prints all alphabets.
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
}
