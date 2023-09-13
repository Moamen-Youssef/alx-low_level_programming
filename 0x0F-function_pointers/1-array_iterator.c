#include "function_pointers.h"

/**
 * array_iterator - prints
 * @array: the arr
 * @size: the size
 * @action: the pointer
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
