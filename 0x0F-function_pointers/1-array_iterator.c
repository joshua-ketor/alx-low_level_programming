#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Executes a function given as a parameter on each
 * element of an array.
 * @array: pointer to array
 * @size: size of the array
 * @action: pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < (int) size; i++)
		action(array[i]);
}
