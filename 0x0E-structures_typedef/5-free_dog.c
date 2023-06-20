#include "dog.h"
#include <stdlib.h>

/**
 * free_dog -  a command to deallocate memory
 * @d: is pointer to dog_t
 * Return: success
**/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

