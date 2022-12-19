#include "main.h"
#include <string.h>

/**
 * _puts - prints character to stdout
 * @str: string to be printed
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
