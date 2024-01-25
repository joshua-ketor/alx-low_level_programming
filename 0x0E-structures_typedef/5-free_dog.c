#include "dog.h"

/**
 * free_dog - free dog
 * @d: pointer to dog structure
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
