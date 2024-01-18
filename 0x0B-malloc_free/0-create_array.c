#include "main.h"

/**
 * create_array - create an array of chars,
 * and initializes it with a specific char
 * @size: number of elements
 * @c: character to initialize array
 *
 * Return: pointer to the array,
 * NULL if size if 0, or if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * (size));
	if (size == 0 || array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	array[i] = '\0';

	return (array);
}
