#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	char i;

	for (i = 0x30; i < 0x3A; i++)
		putchar(i);
	for (i = 0x61; i < 0x67; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
