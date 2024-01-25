#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: pointer to array
 * @size: number of elements in the array `array`
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: 0 if nothing happens else
 * (More on Return)
 * Returns the index of the first element for which the `cmp`
 * -1 if no element matches or size is less than or equal to 0
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
			return (i);
	}
	return (-1);
}
