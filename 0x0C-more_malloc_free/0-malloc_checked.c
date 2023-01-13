#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - check malloc
 * @b: interger
 * Return: retuns pointer
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
