#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of the two diagonal square matrix
 * of integers.
 * @a: parameter
 * @size: size of the matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int c1, c2, x;

	c1 = 0;
	c2 = 0;

	for (x = 0; x < size; x++)
		c1 += a[x * size + x];
	for (x = size - 1; x >= 0; x--)
		c2 += a[x * size + (size - x - 1)];
	printf("%d, %d\n", c1, c2);
}
