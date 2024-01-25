#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: array to search
 * @size: number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first element for which cmp function
 * does not return 0, else return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (array[i]);
	}

	return (-1);
}
