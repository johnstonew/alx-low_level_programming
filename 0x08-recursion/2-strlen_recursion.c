#include "main.h"

/**
 * _strlen_recursion - size of string
 * @s: the string
 * Return: sum of intergers
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);

	return (1 + _strlen_recursion(++s));
}
