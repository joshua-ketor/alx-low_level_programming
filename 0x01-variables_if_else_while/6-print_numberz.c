#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0(success)
 */
int main(void)
{
	int i;

	for (i = 0x30; i < 0x3A; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
