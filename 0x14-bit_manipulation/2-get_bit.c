#include "main.h"

/**
 * get_bit - return the value of a bit at a given index
 * @n: number to get bit from
 * @index: index of bit
 *
 * Return: the value of the bit at index `index` or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(long int) * 8))
		return (-1);
	n >>= index;
	if ((n & 1) == 1)
		return (1);
	else
		return (0);
}
