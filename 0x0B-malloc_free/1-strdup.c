#include "main.h"
#include <stdlib.h>

/**
 * _strdup - creates a duplicate string
 * @str: string
 *
 * Return: pointer to a new string
 */

char *_strdup(char *str)
{
	char *newstr;
	int i, x;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		;

	newstr = malloc(sizeof(str) * (i + 1));

	if (newstr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		newstr[i] = str[i];
	}

	return (newstr);
}
