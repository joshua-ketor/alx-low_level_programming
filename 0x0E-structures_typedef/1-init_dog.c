#include "dog.h"

/**
 * init_dog - initalize a variable of type struct dog
 * @d: pointer to dog structure
 * @name: pointer to name
 * @age: age
 * @owner: pointer to owner
 *
 * Return: Nothing
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
