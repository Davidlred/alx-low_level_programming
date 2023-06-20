#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new struct named dog
 * @name: name parameter value
 * @age: age parameter value
 * @owner: owner parameter value
 * Return: a pointer to new dog or null if fuction fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int ls;
	unsigned int lss;
	unsigned int i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (ls = 0; name[ls]; ls++)
		;
	ls++;
	dog->name = malloc(ls * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ls; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (lss = 0; owner[lss]; lss++)
		;
	lss++;
	dog->owner = malloc(lss * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < lss; i++)
		dog->owner[i] = owner[i];
	return (dog);
}

