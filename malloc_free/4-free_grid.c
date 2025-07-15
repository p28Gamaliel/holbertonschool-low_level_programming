#include "main.h"
#include <stdlib.h>

/**
 * free_grid - libera una cuadricula bidimensional creada previamente
 * @grid: puntero a una matriz bidimensional
 * @height: numero de filas
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
