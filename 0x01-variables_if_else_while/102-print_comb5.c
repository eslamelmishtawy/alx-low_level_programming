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
	int l;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				for (l = 48; l < 58; l++)
				{
					if ( i == j && j == k && k == l )
					{
						continue;
					}
					if ( i == k && j == l)
					{
						continue;
					}
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
