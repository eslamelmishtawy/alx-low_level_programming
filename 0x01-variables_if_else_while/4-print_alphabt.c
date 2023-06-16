#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 52; i++)
	{
		if (alpha[i] == 'q' || alpha[i] == 'e')
		{
			continue;
		}
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
