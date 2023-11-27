#include "main.h"
#include <stdlib.h>

/**
 * free_grid - libera una matriz bidimensional de números enteros.
 * @grid: la matriz bidimensional de números enteros que se liberará.
 * @height: La altura de la cuadrícula.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
