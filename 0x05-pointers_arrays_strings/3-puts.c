#include "main.h"
#include <string.h>

/**
 * _puts - prints character to stdout
 * @str: string to be printed
 */

void _puts(char *str)
{
	int i;
	char word[strlen(str)];

	for (i = 0; i < strlen(str); i++)
	{
		word[i] = str[i];
	}
	puts(word);
}
