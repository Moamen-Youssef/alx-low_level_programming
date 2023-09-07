#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - check the code
 *@b: ....
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
unsigned int *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
