#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to a new string
 */

char *str_concat(char *s1, char *s2)
{
	char *newstr;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	newstr = malloc(sizeof(char) * (i + j + 1));

	if (newstr == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < i; k++)
		newstr[k] = s1[k];

	limit = j;

	for (j = 0; j <= limit; k++, j++)
	{
		newstr[k] = s2[j];
	}

	return (newstr);
}
