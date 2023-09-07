#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - prints buffer in hexa
 * @ptr: the address of memory to print
 * @old_size: .......
 * @new_size: .......
 * Return: Nothing.
 */
void *_realloc(void *ptr,
unsigned int old_size, unsigned int new_size)
{
void *re;
if (new_size == old_size)
{
return (ptr);
}
if (ptr == NULL)
{
return (malloc(new_size));
}
if (new_size == 0 && ptr != NULL)
{
free (ptr);
return (NULL);
}
re = realloc(ptr, new_size);
if (new_size > old_size)
{
if (re == NULL)
{
return (NULL);
}
return (re);
}
return (re);
}
