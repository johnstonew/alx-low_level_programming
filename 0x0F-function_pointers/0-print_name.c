#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: the name
 * @f: pointer to function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
