#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes of memory area to fill
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *mem;
	unsigned int i;

	mem = s;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

		return (mem);
}
