#include "dog.h"

/**
 * init_dog - check the code
 *@d: structure dog
 *@name: name
 *@age: age
 *@owner: owner
 * Return: Alway.
 */

void init_dog(struct dog *d, char *name, 
float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
