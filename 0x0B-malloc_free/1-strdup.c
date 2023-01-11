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
	int i;

	if (str == NULL)
		return (NULL);

	newstr = malloc(sizeof(str));

	if (newstr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		newstr[i] = str[i];
	}

	return (newstr);
}
