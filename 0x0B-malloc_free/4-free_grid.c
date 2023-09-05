#include <stdlib.h>

void free_grid(int **grid, int height)
{
    if (grid == NULL || height <= 0)
    {
        return; // Nothing to free or invalid input
    }

    // Free memory for each row
    for (int i = 0; i < height; i++)
    {
        free(grid[i]);
    }

    // Free memory for the array of row pointers
    free(grid);
}
