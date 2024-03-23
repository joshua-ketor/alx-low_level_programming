#include <stdio.h>

void function(void) __attribute__ ((constructor));

/**
 * function - print a string before the main function runs
 *
 * Return: Nothing
 */
void function(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
