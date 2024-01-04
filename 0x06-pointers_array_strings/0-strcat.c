#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to destination
 * @src: pointer to source
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	char *destend;

	for (i = 0; dest[i] != '\0'; i++)
		destend = &(dest[i]);
	destend++;

	for (i = 0; src[i] != '\0'; i++)
	{
		*destend = src[i];
		destend++;
	}
	*(destend + 1) = '\0';

	return (dest);
}
