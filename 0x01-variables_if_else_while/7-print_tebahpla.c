#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char i;

	for (i = 0x7A; i > 0x60; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
