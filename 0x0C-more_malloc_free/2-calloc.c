#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory of an array using malloc
 * @nmemb: number of elements
 * @size: size of elements
 * Return: multiple values
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(p) + i) = 0;
	}

	return (p);
}
