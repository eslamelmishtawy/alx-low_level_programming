#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - main
 * @width: argc
 * @height: s2
 * Return: absolute value of @n
 */
int **alloc_grid(int width, int height)
{
	char *ar;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ar = malloc(sizeof(int) * (width + height + 1));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			ar[i][j] = 0;
		}
	}

	return (ar);
}
