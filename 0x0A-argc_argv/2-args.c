#include <stdio.h>

/**
 * main - print all arguments main receives
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0 (success)
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
