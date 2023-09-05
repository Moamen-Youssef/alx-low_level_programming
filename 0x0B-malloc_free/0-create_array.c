#include "main.h"
#include <stdlib.h>

/**
 * create_array - funtion
 * @size: the size
 * @c: the c
 * Return: Nothing.
 */


char *create_array(unsigned int size, char c)
{

char *arr = (char *)malloc(sizeof(char) * size);
unsigned int i;
if (arr == NULL || size == 0)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}

