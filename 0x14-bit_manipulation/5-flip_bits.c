#include "main.h"

/**
 * flip_bits - return the number of bits you would need to flip to get
 * from one number to another
 * @n: original number
 * @m: target number
 *
 * Return: number of bit flips required to transform n into m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}