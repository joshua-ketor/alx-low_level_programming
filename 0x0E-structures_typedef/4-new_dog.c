#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: pointer to dog name
 * @age: dog age
 * @owner: pointer to dog owner
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nDog;
	char *newName, *newOwner;

	nDog = malloc(sizeof(dog_t));
	if (nDog == NULL)
		return (NULL);
	newName = malloc((strlen(name) + 1) + sizeof(char));
	if (newName == NULL)
	{
		free(nDog);
		return (NULL);
	}
	strcpy(newName, name);

	newOwner = malloc((strlen(owner) + 1) + sizeof(char));
	if (newOwner == NULL)
	{
		free(newName);
		free(nDog);
		return (NULL);
	}
	strcpy(newOwner, owner);

	nDog->name = newName;
	nDog->age = age;
	nDog->owner = newOwner;

	return (nDog);
}
