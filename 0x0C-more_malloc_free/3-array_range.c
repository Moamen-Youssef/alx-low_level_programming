#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - .....
 * @min: ........
 * @max: >.........
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
int i, min2 = min;
int *arr = (int *)calloc(max - min + 1, sizeof(int));

if (min > max || arr == NULL)
{
return (NULL);
}
for (i = 0; i <= max - min; i++)
{
arr[i] = min2;
min2++;
}
return (arr);
}

