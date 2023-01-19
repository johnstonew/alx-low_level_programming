#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - execute arrays
 * @array: given array
 * @size: size of the array
 * @action: pointer to function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
