#include <stdio.h>

/**
 * main - print the number of arguments passed into it
 * @argc: number of arguments
 * @argv: an array of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char __attribute__((unused))*argv[])
{
	argc--;
	printf("%d\n", argc);

	return (0);
}
