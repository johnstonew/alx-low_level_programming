#include "main.h"

/**
 * string_toupper -  function that changes all lowercase letter
 * @n: number
 * Return: n.
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;

	while (n != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
			i++;
		}
	}
	return (n);
}
