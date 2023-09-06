#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **new_arr = (int **)malloc(sizeof(int *) * height);
if (new_arr == NULL)
{
return (NULL);
free(new_arr);
}
if (width <= 0 || height <= 0)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
new_arr[i] = (int *)malloc(sizeof(int) * width);
if (new_arr[i] == NULL)
{
return (NULL);
free(new_arr);
}
for (j = 0; j < width; j++)
{
new_arr[i][j] = 0;
}
}
return (new_arr);
free(new_arr);
}
