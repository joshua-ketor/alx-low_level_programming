#include "main.h"
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: specific char
 *
 * Return: 0 (working), NULL (something wrong)
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc((size) * sizeof(char));
	if (a == NULL || size == 0)
		return (NULL);
	i = 0;
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	a[i] = '\0';

	return (a);
}
