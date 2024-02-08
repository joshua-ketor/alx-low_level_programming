#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: pointer to integer
 * @index: given index to change the value of bit
 *
 * Return: 1 if it worked, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(long int) * 8))
		return (-1);
	*n = *n | (1UL << index);

	return (1);
}
