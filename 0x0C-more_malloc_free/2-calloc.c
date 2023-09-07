#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - fffffff
 * @nmemb: >.............
 * @size: the size of the memory
 * Return: new arr.
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int *new_arr;
new_arr = (unsigned int *)calloc(nmemb, size);
if (new_arr == NULL || nmemb == 0 || size == 0)
{
return (NULL);
}
return (new_arr);
}
