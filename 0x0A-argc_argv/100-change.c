#include <stdio.h>
#include <stdlib.h>

/**
 * change - calculate the minimum number of coins to make
 * change for an amount of money
 * @cents: amount of cents you need to give back
 *
 * Return: Minimum number of coins to make change
 */
int change(int cents)
{
	int ch;

	ch = 0;
	if (cents < 0)
		return (0);
	while (cents >= 25)
	{
		++ch;
		cents -= 25;
	}
	while (cents >= 10)
	{
		++ch;
		cents -= 10;
	}
	while (cents >= 5)
	{
		++ch;
		cents -= 5;
	}
	while (cents >= 2)
	{
		++ch;
		cents -= 2;
	}
	while (cents >= 1)
	{
		++ch;
		cents -= 1;
	}
	return (ch);
}


/**
 * main - print the minimum number of coins
 * to make change for an amount of money
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 (success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", change(atoi(argv[1])));
	return (0);
}
