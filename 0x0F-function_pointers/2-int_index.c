#include "function_pointers.h"

/**
 * int_index - check if a number is
 * @array: the array
 * @size: the integer to check
 * @cmp: function pointer
 * Return:c.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array != NULL && cmp != NULL)
{
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
}
return (-1);
}
