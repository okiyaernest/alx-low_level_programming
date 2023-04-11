#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: a pointer to the 2D array of integers, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    /* return NULL on invalid width or height */
    if (width <= 0 || height <= 0)
        return (NULL);

    /* allocate memory for the rows of the grid */
    grid = malloc(height * sizeof(int *));
    if (grid == NULL)
        return (NULL);

    /* allocate memory for the columns of each row */
    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(width * sizeof(int));
        if (grid[i] == NULL)
        {
            /* free memory for previous rows on failure */
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return (NULL);
        }
    }

    /* initialize each element of the grid to 0 */
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            grid[i][j] = 0;
        }
    }

    return (grid);
}
