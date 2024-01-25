#include "dog.h"

/**
 * print_dog - print struct dog
 * @d: pointer to dog structure
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
