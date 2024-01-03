#include "main.h"

/**
 * _strcpy - copy the string pointed to by src, including the
 * terminating null byte(\0), to the buffer  pointed to by dest
 * @dest: pointer to destination
 * @src: pointer to source
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr_to_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (ptr_to_dest);
}
