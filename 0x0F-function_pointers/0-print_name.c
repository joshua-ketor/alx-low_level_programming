#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - print a name
 * @name: name to print
 * @f: function pointer
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
