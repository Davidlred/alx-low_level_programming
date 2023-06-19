#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - initializes a variable type dog
 * @d: the name of pointer to struct
 * @name: placeholder for name
 * @age: placeholder for age
 * @owner: variable named owner
 * Return: succes
**/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}

