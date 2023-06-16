#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i < 56; i++)
	{
		for (j = 49; j < 57; j++)
		{
			for (k = 50; k < 58; k++)
			{
				if (i == j || i == k || j == k || i > j || i > k || j > k)
				{
					continue;
				}
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
