#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * print_to_98 - prints all alphabets.
 * @a: first number
 * Return: always 0
 */
void print_to_92(int a)
{
	int i;
	for (i = a; i < 99; i++)
	{
		putchar(i + '0');
	}
}
