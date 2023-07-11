#include "main.h"

/**
 * free_grid - frees a 2D grid previously created by alloc_grid
 * @grid: pointer to the grid to be freed
 * @height: the height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
if (grid == NULL || height <= 0)
return;

int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
