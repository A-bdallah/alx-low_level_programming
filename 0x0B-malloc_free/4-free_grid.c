#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid : input value
 * @height : input value
 * Return: nothing
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
