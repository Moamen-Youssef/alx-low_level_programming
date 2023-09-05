#include "main.h"
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
int i;
int j;
int **mal = (int **)malloc(sizeof(int *) 
* height); 
if ((width  == 0 || width < 0) 
|| height == 0 || height < 0)
{
return (NULL);
}
if (mal == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
mal[i][j] = 0;
}
}
return (mal);
}
