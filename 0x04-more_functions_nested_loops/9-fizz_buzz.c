#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * main - prints all alphabets.
 *
 * Return: always 0
 */

int main(void)
{
	int j;

	for (j = 1; j < 101; j++)
	{
		if (j % 3 == 0 && j % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (j % 3 == 0)
		{
			printf("Fizz");
		}
		else if (j % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", j);
		}
		if (j == 100)
		{
			putchar('\n')
			continue;
		}
		putchar(' ');
	}
	return (0);
}
