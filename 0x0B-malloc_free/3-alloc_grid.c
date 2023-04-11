#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: An input integer at number of columns
 * @height: An input integer at number of rows
 * Return: pointer to a 2D array, NULL on failure
 */
int **alloc_grid(int width, int height) {
    if (width <= 0 || height <= 0) {
        return NULL;
    }

    int **grid = malloc(height * sizeof(int *));
    if (grid == NULL) {
        return NULL;
    }

    for (int i = 0; i < height; i++) {
        grid[i] = calloc(width, sizeof(int));
        if (grid[i] == NULL) {
            // Free previously allocated rows before returning NULL
            for (int j = 0; j < i; j++) {
                free(grid[j]);
            }
            free(grid);
            return NULL;
        }
    }

    return grid;
}
