#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog - a dog structure
 * @name: name of dog
 * @age: type of dog
 * @owner: owner of dog
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG HEADER */
