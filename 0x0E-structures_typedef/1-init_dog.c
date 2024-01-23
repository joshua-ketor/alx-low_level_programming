#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type `struct dog`
 * @d: A dog struct
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
