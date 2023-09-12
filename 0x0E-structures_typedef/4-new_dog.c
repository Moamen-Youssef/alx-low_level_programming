#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
new->name = strdup(name);
new->age = age;
new->owner = strdup(owner)
;
return (new);
}
else
return (NULL); 
}

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}