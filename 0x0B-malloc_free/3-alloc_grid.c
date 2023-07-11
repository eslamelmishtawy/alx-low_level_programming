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
	char **ar;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ar = malloc(sizeof(*ar) * height);
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(**ar));
		if (ar[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}

	return (ar);
}
