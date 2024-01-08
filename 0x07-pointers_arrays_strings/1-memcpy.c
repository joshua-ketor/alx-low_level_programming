#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *destbgn;
	unsigned int i;

	destbgn = dest;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (destbgn);
}
