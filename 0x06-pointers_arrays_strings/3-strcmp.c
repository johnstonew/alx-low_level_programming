#include "main.h"
#include <string.h>

/**
 * _strcmp -  function that compares two strings
 * length1: length of first string
 * length2: string of second string
 * @s1: value 1
 * @s2: value 2
 * Return: value of compared strings
 */

int _strcmp(char *s1, char *s2)
{
	int length1 = strlen(s1);
	int length2 = strlen(s2);

	if (length2 > length1)
	{
		return (-15);
	}
	else if (length1 > length2)
	{
		return (15);
	}
	else
	{
		return (0);
	}
}
