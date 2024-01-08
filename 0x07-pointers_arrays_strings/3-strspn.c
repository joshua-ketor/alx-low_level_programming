#include "main.h"

/**
 * _strspn - get the length of a prefix suubstring
 * @s: pointer to string
 * @accept: pointer to substring
 *
 * Return: number of bytes in initial segment os s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int num = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				num++;
				break;
			}
			else if (accept[i] == '\0')
			{
				return (num);
			}
		}
		s++;
	}
	return (num);

}
