#include <stdlib.h>
#include <string.h>
/**
 * free_grid - main
 * @grid: argc
 * @height: s2
 * Return: absolute value of @n
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
