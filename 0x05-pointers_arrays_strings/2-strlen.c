#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer to be evaluated
 *
 * Return: returns length of string
 */

int _strlen(char *s)
{
	int *ptr = *s;

	return (strlen(ptr));
}
