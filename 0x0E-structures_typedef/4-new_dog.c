#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - check the code
 *@name: name
 *@age: age
 *@owner: owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new;
new = malloc(sizeof(dog_t));
if (new != NULL)
{
new->name = name;
new->age = age;
new->owner = owner;
return (new);
}
else
return (NULL); 
}
