#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - check the code
 *@d: name
 *Return: nothing
 */

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d);
}
}
