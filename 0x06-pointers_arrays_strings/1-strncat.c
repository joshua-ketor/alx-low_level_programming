#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of bytes to append
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';

	return (dest);
}
