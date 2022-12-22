#include "main.h"
#include <string.h>

/**
 * _strncat -  function that concatenates two strings.
 * @src: source text
 * @dest:dest text
 * @n: number.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = strlen(dest);
	int a = 0;

	while (a < n && *src)
	{
		dest[length + a] = *src;
		src++;
		a++;
	}
	dest[length + a] = '\0';
	return (dest);
}
