#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: pointer to string
 *
 * Return: Converted string
 */
int _atoi(char *s)
{
	int i, result, sign, num_started;

	result = num_started = 0;
	sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num_started = 1;
			result = result * 10 + (s[i] - '0') * sign;
		}
		else if (s[i] == '-' && !num_started)
			sign *= -1;
		else if (s[i] == '+' && !num_started)
			continue;
		else if (num_started)
			break;
	}
	return (result);
}
